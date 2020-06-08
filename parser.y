
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);



%}

%code requires {

#include "expression.h"
struct Array variables;
}

%union
{
    struct Variable nval;
   
}




%token FALSE NONE TRUE AND AS ASSERT BREAK CLASS CONTINUE DEF DEL ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF IMPORT COMMA DOT COL

%token IN IS LAMBDA NOT OR COLON PASS RAISE RETURN TRY WHILE WITH YIELD PRINT EXEC   INC DEC EQUAL

%token  LPAR RPAR  LESS_THAN_OP GREATER_THAN_OP MINUS AND_EXP NEWLINE LBRA RBRA PAPAKI QUOTATION APOSTROPHE


%token ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN  EXA SUB_ASSIGN MUL_ASSIGN POW_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN PERCENT OR_SIGN IMAGNUMBER

%token XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP PTR_OP LE_OP GE_OP EQ_OP NE_OP STAR DOUBLESTAR SLASH DOUBLESLASH RANGE  LR_OP PLUS XOR NOT_SIGN 


%token<nval> 	DECINTEGER 
%token<nval> 	OCTINTEGER   
%token<nval> 	HEXINTEGER 
%token<nval> 	POINTFLOAT 
%token<nval> 	EXPONENTFLOAT 
%token<nval> 	IDENTIFIER 
%token<nval> 	SHORTSTRING
%token<nval> 	LONGSTRING

%type<nval> 	identifier
%type<nval>   	integer
%type<nval>   	stringliteral 	 	 	
%type<nval>   	floatnumber
%type<nval>   	literal
%type<nval>   	atom
%type<nval>   	expression
%type<nval>  	print_stmt
%type<nval>   	target
%type<nval>	target_list
%type<nval> 	assignment_stmt
%type<nval>	assignment_stmt_targer_list
%type<nval> 	expression_list
%type<nval> 	attr_identifier
%type<nval> 	longinteger




%%
start:
	program
	//{free(&variables);}
	;

program: 
	//empty
	| statement_list;

statement_list : 
	statement_list statement 
	| statement;

statement:
	import_stmt 
	| assignment_stmt
	| if_stmt
	| for_stmt
	| print_stmt
	| funcdef
	| classdef
	| call
	| return_stmt
	| lambda_form
	; 


return_stmt:
		RETURN
		| RETURN expression_list;
call:
	primary LPAR RPAR
	| primary LPAR expression_list RPAR
	| identifier EQUAL primary LPAR  RPAR
	| identifier EQUAL primary LPAR expression_list RPAR;
		

primary:
	identifier
	|attr_identifier
	;


lambda_form:
	LAMBDA COLON expression
	| LAMBDA parameter_list COLON expression;	

//----------------------- Print field ------------------------------------

print_stmt:
		PRINT
		| PRINT expression
		{print($2,&variables); }
		| PRINT expression_list
		| PRINT RIGHT_OP expression
		| PRINT RIGHT_OP expression_list
		| PRINT LPAR call RPAR;


		
//----------------------- Expressions field ------------------------------------




expression_list:
	expression_list COMMA expression
	
	|LPAR expression_list COMMA expression RPAR
	| expression
	{$$ = $1; };


expression : 
	atom
	{$$ = $1; }
	| LPAR expression RPAR
	{$$ = $2;}
	| expression PLUS expression
	{printf("%s eweqweqweqeqwValue\n\n",$3.string); $$ = add_calc($1,$3,&variables);  }
	| expression MINUS expression
	//{$$ = $2;}
	| expression SLASH expression
	//{$$ = $2;}
	| expression STAR expression
	//{$$ = $2;}
	
	| expression assignment_op expression	
	| expression arithmetic_op expression
	| expression comparison_op expression
	| expression logical_op expression
	| expression bitwise_op expression;
	
atom:
	literal
	{$$ = $1;}
	| identifier
	{$$ = $1; }
	|integer
	{$$ = $1; }
	| attr_identifier
	| dict_display;



//----------------------- Assignment field ------------------------------------
assignment_stmt:
	assignment_stmt_targer_list expression_list
	{insertArray(&variables,value_assign($1,$2)); }
	|assignment_stmt_targer_list call	
	;
		
assignment_stmt_targer_list:
	target_list EQUAL
	{$$ = $1; }
	| assignment_stmt_targer_list target_list EQUAL;
target_list:
	target
	{$$ = $1; }
	| target_list COMMA target
	| target_list COMMA;

target:
	IDENTIFIER
	{$$ = $1; }
	|attr_identifier
	|LPAR target_list RPAR;


//----------------------- Operators field ------------------------------------

	
assignment_op:
	 
	 ADD_ASSIGN
	| SUB_ASSIGN
	| MUL_ASSIGN
	| POW_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	| RIGHT_ASSIGN
	| LEFT_ASSIGN    ;          

arithmetic_op: 
	PERCENT
	| DOUBLESTAR
	| DOUBLESLASH;

comparison_op: 
	EQ_OP
	| NE_OP
	| GREATER_THAN_OP
	| LESS_THAN_OP
	| LE_OP
	| GE_OP;

logical_op: 
	AND
	| NOT
	| OR
	| IS 
	| IN
	| IS NOT
	| NOT IN;

bitwise_op: 
	AND_EXP
	| OR_SIGN
	| XOR
	| NOT_SIGN
	| LEFT_OP
	| RIGHT_OP;

        
literal:  
	//integer
	//{$$ = $1; }
	 floatnumber
	{$$ = $1; }
	| stringliteral
	{$$ = $1; }
	| longinteger
	| imagnumber;




//----------------------- Import filed --------------------------------------
import_stmt: 

	IMPORT module
	| IMPORT module AS name
	| IMPORT modules modules
	| IMPORT modules AS name modules
	| FROM relative_module IMPORT identifier
	| FROM relative_module IMPORT identifier AS name
	| FROM relative_module IMPORT identifier import_stmt_identifiers
	| FROM relative_module IMPORT identifier AS name import_stmt_identifiers
	| FROM relative_module IMPORT LPAR identifier RPAR
	| FROM relative_module IMPORT LPAR identifier AS name RPAR
	| FROM relative_module IMPORT LPAR identifier import_stmt_identifiers RPAR
	| FROM relative_module IMPORT LPAR identifier AS name import_stmt_identifiers RPAR
	| FROM relative_module IMPORT LPAR identifier COMMA RPAR
	| FROM relative_module IMPORT LPAR identifier AS name COMMA RPAR
	| FROM relative_module IMPORT LPAR identifier import_stmt_identifiers COMMA RPAR
	| FROM relative_module IMPORT LPAR identifier AS name import_stmt_identifiers COMMA RPAR
	| FROM relative_module IMPORT STAR;	


module: 
	module DOT identifier 
	| identifier;

relative_module:
	 module 
	| dots module
	| dots;


dots: DOT
	| dots DOT;

modules: modules COMMA  module
	| modules COMMA  module AS name
	| COMMA module
	| COMMA module AS name;


import_stmt_identifiers:
	COMMA identifier
	| COMMA identifier AS name
	| import_stmt_identifiers COMMA identifier
	| import_stmt_identifiers COMMA identifier AS name;

name: IDENTIFIER ;


//----------------------- Compound_stmt field ------------------------------------------------

//=================================== If =============================================
if_stmt:
	IF  expression  COLON statement_list
	| IF  expression COLON statement_list ELSE COLON statement_list
	| IF expression  COLON statement_list elif_stmt
	| IF  expression  COLON statement_list elif_stmt ELSE COLON statement_list;
		
elif_stmt:
	ELIF  expression  COLON  statement_list
	| elif_stmt ELIF  expression  COLON statement_list;
//=================================== For ===========================================

for_stmt:
	FOR for_target_list IN expression_list COLON statement_list
	|FOR for_target_list IN RANGE LPAR expression_list RPAR  COLON statement_list
	| FOR for_target_list IN expression_list COLON statement_list ELSE COLON statement_list;

for_target_list:
	for_target
	| for_target_list COMMA target
	| for_target_list COMMA;

for_target:
	identifier
	|LPAR for_target_list RPAR;

//================================== Function  ================================

funcdef:
	DEF funcname LPAR RPAR COLON statement_list
	| decorators DEF funcname LPAR RPAR COLON statement_list
	| DEF funcname LPAR parameter_list RPAR COLON statement_list
	| decorators DEF funcname LPAR parameter_list RPAR COLON statement_list;
		
decorators:
	decorator
	| decorators decorator;
		
decorator:
	PAPAKI dotted_name NEWLINE
	| PAPAKI dotted_name LPAR RPAR NEWLINE;

dotted_name:
	identifier
	| identifier dot_identifiers;
		
dot_identifiers:
	DOT identifier
	| dot_identifiers DOT identifier;
		
parameter_list:
	STAR identifier
	| STAR identifier COMMA DOUBLESTAR identifier
	| DOUBLESTAR identifier
	| defparameter
	| defparameter COMMA
	| defparameters STAR identifier
	| defparameters STAR identifier COMMA DOUBLESTAR identifier
	| defparameters DOUBLESTAR identifier
	| defparameters defparameter
	| defparameters defparameter COMMA;
		
defparameter:
	parameter
	| parameter EQUAL expression;
		
defparameters:
	defparameter COMMA
	| defparameters defparameter COMMA;
	
sublist:
	parameter
	| parameter COMMA
	| parameter parameters
	| parameter parameters COMMA;
	
parameter:
	identifier
	| LPAR sublist RPAR;
		
parameters:
	COMMA parameter
	| parameters COMMA parameter;
		
funcname:
	identifier;

//=================================== Class ===========================================

classdef:
	CLASS classname COLON statement_list
	| CLASS classname inheritance COLON statement_list;
		
inheritance:
	LPAR RPAR
	| LPAR expression_list RPAR;
		
classname:
	identifier;
	
//----------------------- etc -------------------------------------------------

dict_display:
	LBRA RBRA
	| LBRA key_datum_list RBRA;
		
key_datum_list:
	key_datum
	| key_datum COMMA
	| key_datum key_datums
	| key_datum key_datums COMMA;

key_datums:
	COMMA key_datum
	| key_datums COMMA key_datum;
		
key_datum:
		expression COLON expression;
		

identifier:
		IDENTIFIER
		{$$ = $1;  } ;

attr_identifier:
	identifier
	{$$ = $1; }
	| attr_identifier DOT identifier 
	{$$ = $1;  }
;
	
stringliteral:
	SHORTSTRING
	{$$ = $1;} 
	| LONGSTRING
	 {$$ = $1;} 
;

longinteger:
	integer 'l' 
	{$$ = $1;}
	| integer 'L'
	{$$ = $1;}
	;

		
integer:
	DECINTEGER 
	{$$ = $1;} 
	| OCTINTEGER 
	{$$ = $1;} 
	| HEXINTEGER
	{$$ = $1;} 
;
		
floatnumber:
	POINTFLOAT 
	{$$ = $1;} 
	| EXPONENTFLOAT
	{$$ = $1;} 
;	
imagnumber:
	IMAGNUMBER
	//{$$ = $1;} 
;

%%


int main() {

  
  initArray(&variables, 5);  // initially 5 elements
   extern int yydebug;
    //yydebug = 1;
  // Open a file 
  FILE *myfile = fopen("example.py", "r");
  //  is valid?
  if (!myfile) {
    
    return -1;
  }
  // read the file
  yyin = myfile;
  
  // Parse through the input:
  yyparse();
 
}


void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}




