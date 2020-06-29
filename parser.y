
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  extern int yylineno;
   
  void yyerror(const char *s);


%}

%code requires {

#include "expression.h"
struct Array variables;
struct Array dictionary;
struct Array functions;
}

%union
{
    struct Variable nval;
	
}



%token FALSE NONE TRUE AND AS ASSERT BREAK CLASS CONTINUE DEF DEL ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF IMPORT COMMA DOT COL

%token IN IS LAMBDA NOT OR COLON PASS RAISE RETURN TRY WHILE WITH YIELD PRINT EXEC   INC DEC EQUAL SETDEFAULT

%token   LPAR RPAR  LESS_THAN_OP GREATER_THAN_OP  AND_EXP NEWLINE LBRA RBRA PAPAKI QUOTATION APOSTROPHE ITEMS


%token ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN  EXA SUB_ASSIGN MUL_ASSIGN POW_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN PERCENT OR_SIGN 

%token XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP PTR_OP LE_OP GE_OP EQ_OP NE_OP  DOUBLESTAR  DOUBLESLASH RANGE  LR_OP  XOR NOT_SIGN 


%left  PLUS MINUS
%left  STAR SLASH 


%token<nval> 	DECINTEGER 
%token<nval> 	OCTINTEGER   
%token<nval> 	HEXINTEGER 
%token<nval> 	POINTFLOAT 
%token<nval> 	EXPONENTFLOAT 
%token<nval> 	IDENTIFIER 
%token<nval> 	SHORTSTRING
%token<nval> 	LONGSTRING
%token<nval> 	IMAGNUMBER

%type<nval>  	imagnumber
%type<nval> 	identifier
%type<nval>   	integer
%type<nval>   	stringliteral 	 	 	
%type<nval>   	floatnumber
%type<nval>   	literal
%type<nval>   	atom
%type<nval>   	expression
%type<nval>  	print_stmt
%type<nval>   	target
%type<nval>		target_list
%type<nval> 	assignment_stmt
%type<nval>		assignment_stmt_targer_list
%type<nval> 	expression_list
%type<nval> 	attr_identifier
%type<nval> 	longinteger
%type<nval>  	call
%type<nval>  	primary
%type<nval>  	dict_display
%type<nval>  	dict_setdefault

%type<nval>  	lam_parameters
%type<nval>  	lambda_form
%type<nval>  	funcname 


%%


program: 
	//empty
	{printf("Success! You are awesome. \n");}
	| statement_list
	{printf("Success! You are awesome. \n");}
	;

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
	| break_stmt
	| lambda_form
	| dict_setdefault
	| dict_items
	; 

break_stmt:
	BREAK;

return_stmt:
		RETURN
		| RETURN expression_list;
call:
	primary LPAR RPAR
	
	| primary LPAR expression_list RPAR
	
	| identifier EQUAL primary LPAR  RPAR
	
	| identifier EQUAL primary LPAR expression_list RPAR
	
		

primary:
	identifier
	{$$ = $1;}
	|attr_identifier
	{$$ = $1;}
	;


	

lambda_form:
	LAMBDA COLON expression
	| LAMBDA lam_parameters COLON expression
	;


lam_parameters:
	identifier
	{$$ = $1; $$.type = LAM ;insertArray(&variables, $$); }
	|attr_identifier
	|lam_parameters COMMA identifier
	|lam_parameters COMMA attr_identifier;


//----------------------- Print field ------------------------------------

print_stmt:
		PRINT
		| PRINT expression
		{printf(">>  "); print($2,&variables); }
		| PRINT expression_list
		{printf(">>  "); print($2,&variables); }
		| PRINT RIGHT_OP expression
		{printf(">>  "); print($3,&variables); }
		| PRINT RIGHT_OP expression_list
		{printf(">>  "); print($3,&variables); }
		| PRINT LPAR call RPAR
		{printf(">>  "); print($3,&variables); };

		
//----------------------- Expressions field ------------------------------------




expression_list:
	expression_list COMMA expression
	{$$ = $3;}
	|LPAR expression_list COMMA expression RPAR
	{$$ = $4;}
	| expression
	{$$ = $1; };


expression: 
	atom
	{$$ = $1; }
	| expression PLUS expression
	{$$ = add_calc($1,$3,&variables,1);  }
	| expression MINUS expression
	{$$ = minus_calc($1,$3,&variables,1);  }
	| expression STAR expression
	{$$ = mul_calc($1,$3,&variables,1); }
	| expression SLASH expression
	{$$ = div_calc($1,$3,&variables,1);  }
	
	
	| expression assignment_op expression	
	| expression arithmetic_op expression
	| expression comparison_op expression
	| expression logical_op expression
	| expression bitwise_op expression;
	| LPAR expression RPAR
	{$$ = $2;}
	
atom:
	literal
	{$$ = $1;}
	| identifier
	{$$ = $1; }
	|integer
	{$$ = $1; }
	| attr_identifier
	{$$ = $1; }
	| dict_display
	{$$ = $1; }
	|dict_setdefault
	{$$ = $1; };



//----------------------- Assignment field ------------------------------------
assignment_stmt:
	assignment_stmt_targer_list expression_list
	{insertArray(&variables,value_assign($1,$2,&variables));  }

	|assignment_stmt_targer_list call	

	|assignment_stmt_targer_list lambda_form
	{insertArray(&variables,value_assign($1,$2,&variables));}
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
	{$$ = $1; }
	|LPAR target_list RPAR
	{$$ = $2; };


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
	{$$ = $1; }
	| imagnumber
	{$$ = $1; };




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
	identifier


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

dict_items:
identifier DOT ITEMS LPAR RPAR
{items(&dictionary,&variables);};

dict_setdefault:
	identifier DOT SETDEFAULT LPAR expression COMMA expression RPAR
	{setDefault($5,$7,&dictionary,&variables);};

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
		expression COLON expression
		{ insertArray(&dictionary,$1); insertArray(&dictionary,$3);};
		
//======================================================================================
attr_identifier:
	identifier
	{$$ = $1; }	
	| attr_identifier DOT identifier 
	{$$ = $1;  }
	|identifier DOT identifier
;

identifier:
		IDENTIFIER
		{$$ = $1;  } ;


	
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
	{$$ = $1;} 
;

%%


int main(int argc, char** argv) {

  
  initArray(&variables, 5);  // initially 5 elements
  initArray(&dictionary,5);


   extern int yydebug;
   //yydebug = 1;

  // Open a file 
  FILE *myfile = fopen(argv[1], "r");
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
	fprintf(stderr, "Line: %d --> Parser error\n", yylineno);
	exit(1);
}




