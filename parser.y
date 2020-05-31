
%{
 
#include <stdio.h>
#include <stdlib.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);
%}

%token FALSE NONE TRUE AND AS ASSERT BREAK CLASS CONTINUE DEF DEL ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF IMPORT COMMA DOT COL

%token IN IS LAMBDA NOT OR COLON PASS RAISE RETURN TRY WHILE WITH YIELD PRINT EXEC IDENTIFIER SHORTSTRING LONGSTRING INC DEC EQUAL

%token DECINTEGER OCTINTEGER LPAR RPAR HEXINTEGER POINTFLOAT EXPONENTFLOAT IMAGNUMBER LESS_THAN_OP GREATER_THAN_OP MINUS AND_EXP NEWLINE


%token ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN  SUB_ASSIGN MUL_ASSIGN POW_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN PERCENT OR_SIGN

%token XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP PTR_OP LE_OP GE_OP EQ_OP NE_OP STAR DOUBLESTAR SLASH DOUBLESLASH RANGE  LR_OP PLUS XOR NOT_SIGN 




%%

program: 
	//empty
	| statement_list;

statement_list : 
	statement_list statement 
	| statement
	| expression_list ;

statement:
	import_stmt 
	| assignment
	| if_stmt
	| for_stmt
	| expression_stmt ;  

	
expression_stmt: expression_list;	


assignment: 
	identifier assignment_op expression
	| INC identifier
	| identifier INC
	| DEC identifier
	| identifier DEC;


expression_list: 
	expression_list COMMA expression
	| expression;


expression : 
	LPAR expression RPAR
	| literal
	| identifier
	| expression arithmetic_op expression
	| expression comparison_op expression
	| expression logical_op expression
	| expression bitwise_op expression;



	
assignment_op:
	 EQUAL
	| ADD_ASSIGN
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
	PLUS
	| MINUS
	| STAR
	| SLASH
	| PERCENT
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
	name:
		identifier
	| NOT_SIGN
	| LEFT_OP
	| RIGHT_OP;

        
literal:  
	integer
	| floatnumber
	| stringliteral
	| longinteger
	| imagnumber;






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

name: IDENTIFIER;


if_stmt:
	IF expression COLON statement_list
	| IF expression COLON statement_list ELSE COLON statement_list
	| IF expression COLON statement_list elif_stmt
	| IF expression COLON statement_list elif_stmt ELSE COLON statement_list;
		
elif_stmt:
	ELIF expression COLON statement_list
	| elif_stmt ELIF expression COLON statement_list;


for_stmt:
	FOR target_list IN expression_list COLON statement_list
	|FOR target_list IN RANGE LPAR expression_list RPAR  COLON statement_list
	| FOR target_list IN expression_list COLON statement_list ELSE COLON statement_list;

target_list:
	target
	| target_list COMMA target
	| target_list COMMA;

target:
	identifier;
	

identifier:
		IDENTIFIER;

	
stringliteral:
		SHORTSTRING | LONGSTRING;

longinteger:
		integer 'l' | integer 'L';
		
integer:
		DECINTEGER | OCTINTEGER | HEXINTEGER;
		
floatnumber:
		POINTFLOAT | EXPONENTFLOAT;
	
imagnumber:
		IMAGNUMBER;

%%


int main() {
  extern int yydebug;
    yydebug = 1;
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
