
%{
 

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);
%}

%token FALSE NONE TRUE AND AS ASSERT BREAK CLASS CONTINUE DEF DEL ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF IMPORT COMMA 

%token IN IS LAMBDA NOT OR PASS RAISE RETURN TRY WHILE WITH YIELD PRINT EXEC IDENTIFIER SHORTSTRING LONGSTRING EX

%token DECINTEGER OCTINTEGER HEXINTEGER POINTFLOAT EXPONENTFLOAT IMAGNUMBER LESS_THAN_OP GREATER_THAN_OP MINUS AND_EXP NEWLINE


%token ELLIPSIS RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN COLON SUB_ASSIGN MUL_ASSIGN POW_ASSIGN DIV_ASSIGN MOD_ASSIGN AND_ASSIGN PERCENT OR_SIGN

%token XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP PTR_OP LE_OP GE_OP EQ_OP NE_OP STAR DOUBLESTAR SLASH DOUBLESLASH  LR_OP PLUS XOR


%start input

%%
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





atom:
		identifier
		| literal
		| enclosure;	
		
enclosure:
		parenth_form;
		
literal:
		stringliteral
		| integer
		| longinteger
		| floatnumber
		| imagnumber;

parenth_form:
		"(" ")"
		| "(" expression_list ")";

primary: atom| attributeref|;

attributeref: primary "." identifier;

power :
             primary DOUBLESTAR u_expr | primary;

u_expr :
             power | MINUS u_expr
              | PLUS u_expr | "~" u_expr;

m_expr :
             u_expr | m_expr STAR u_expr
              | m_expr DOUBLESLASH u_expr
              | m_expr SLASH u_expr
                | m_expr PERCENT u_expr;

a_expr : m_expr | a_expr PLUS m_expr
              | a_expr MINUS m_expr;


shift_expr :
             a_expr
              | shift_expr  RIGHT_OP  a_expr | shift_expr  LEFT_OP  a_expr;

and_expr : shift_expr | and_expr AND_EXP shift_expr;

xor_expr : 
             and_expr | xor_expr XOR and_expr;
or_expr : 
             xor_expr | or_expr OR_SIGN xor_expr;

comparison:
		or_expr
		| comparison comp_operator or_expr;
		

comp_operator :
             LESS_THAN_OP | GREATER_THAN_OP | EQ_OP | GE_OP | LE_OP| LR_OP| NE_OP  | IS | IS NOT | IN | NOT IN;

expression :conditional_expression;

conditional_expression:
		or_test
		| or_test IF or_test ELSE expression;
		
or_test:
		and_test
		| or_test OR and_test;
		
and_test:
		not_test
		| and_test AND not_test;
		
not_test:
		comparison
		| NOT not_test;

expression_list:
		expression
		| expression COMMA
		| expression expressions
		| expression expressions COMMA;

expressions:
		COMMA expression
		| expressions COMMA expression;


simple_stmt: modules_import|expression_stmt;


expression_stmt: expression_list;



modules_import:	IMPORT module{cout<<"hi import"<<endl;} 
	|	IMPORT module AS name{cout<<"import"<<endl;}
	|	FROM module IMPORT name;


		
module : module '.' name | name ;



name : IDENTIFIER;

statement:
		stmt_list NEWLINE;
		
		
	statements:
		statement
		| statements statement;
		
	stmt_list:
		simple_stmt
		| simple_stmt COLON
		| simple_stmt simple_stmts
		| simple_stmt simple_stmts COLON;
		
	simple_stmts:
		COLON simple_stmt
		| simple_stmts COLON simple_stmt;


newlines:
		NEWLINE
		| newlines NEWLINE;
		
input:
		newlines
		| statements;


%%


int main(int, char**) {
  
    yydebug = 1;
    yyparse();
  
}

void yyerror(const char *s) {
  cout << "EEK, parse error!  Message: " << s << endl;
  // might as well halt now:
  exit(-1);
}
