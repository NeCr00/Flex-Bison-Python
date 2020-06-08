%{
#include <stdlib.h>
#include <stdio.h>
#include "parser.tab.h" // Get tokens from bison
#include <string.h>



int nesting = 0 ; 

unsigned int level = 0 ;
int level_start[100];
int linee =1;
unsigned int first = 1 ;
unsigned int flag = 0;
unsigned int line =0;
void process_indent(char* line) ;
void unputt(int leng);
%}

IDENTIFIER 	[a-zA-Z_][a-zA-Z0-9_]*

DIGIT		[0-9]
NONZERODIGIT	[1-9]
OCTDIGIT	[0-7]
HEXDIGIT	{DIGIT}|[a-fA-F]
DECINTEGER	{NONZERODIGIT}{DIGIT}*|"0"
OCTINTEGER	"0"{OCTDIGIT}+
HEXINTEGER	"0"("x"|"X"){HEXDIGIT}+

INTPART		{DIGIT}+
FRACTION	"."{DIGIT}+
POINTFLOAT	({INTPART}?{FRACTION})|({INTPART}".")|{FRACTION}
EXPONENT	("e"|"E")("+"|"-")?{DIGIT}+
EXPONENTFLOAT	({INTPART}|{POINTFLOAT}){EXPONENT}

IMAGNUMBER	({POINTFLOAT}|{EXPONENTFLOAT}|{INTPART})("j"|"J")

STRINGPREFIX	("r"|"u"|"ur"|"R"|"U"|"UR"|"Ur"|"uR")
SHORTSTRINGITEM	([^\n\'\"\\])|([\\].)
LONGSTRINGITEM	([^\\])|([\\].)
SHORTSTRING	{STRINGPREFIX}?([']{SHORTSTRINGITEM}*[ '])|(["]{SHORTSTRINGITEM}*[ "])
LONGSTRING	{STRINGPREFIX}?(([']{3}{LONGSTRINGITEM}*[ ']{3})|(["]{3}{LONGSTRINGITEM}*[ "]{3}))

NEWLINE		\n
WHITESPACE	[ \t\v\n\f]


%option noyywrap

%%


^[ ]*\n	       		{/* Ignore blank lines. */ linee++ ;} 			
^[\t]*\n       		{/* Ignore blank lines. */ ;}
^.+  	       		{process_indent(yytext); unputt(yyleng);/*Reads every line*/}
[#].*			{ /*Ignore comments*/}

		
"if" 			{level++ ; flag = 1;  return IF;}
"for"   		{level++ ; flag = 1;  return FOR;}
"def"			{level++ ; flag = 1;  return DEF;}
"class"			{level++ ; flag = 1;  return CLASS;}
"elif"			{level++ ; flag = 1;  return ELIF;}
"else"			{level++ ; flag = 1;  return ELSE;}

"False"			{return FALSE;}
"None"			{return NONE;}
"True"			{return TRUE;}
"and"			{return AND;}
"as"			{return AS;}
"assert"		{return ASSERT;}
"break"			{return BREAK;}
"continue"		{return CONTINUE;}
"del"			{return DEL;}
"except"		{return EXCEPT;}
"finally"		{return FINALLY; }
"from"			{return FROM; }
"global"		{return GLOBAL;}
"import"		{return IMPORT;}
"in"			{return IN; }
"is"			{return IS; }
"lambda"		{return LAMBDA;}
"not"			{return NOT;}
"or"			{return OR;}
"pass"			{return PASS;}
"raise"			{return RAISE;}
"return"		{return RETURN;}
"try"			{return TRY;}
"while"			{return WHILE;}
"with"			{return WITH;}
"yield"			{return YIELD;}
"range"			{return RANGE;}
"print"			{return PRINT;}
"exec"			{return EXEC;}

"L"			{return 'L';}
"l"			{return 'l';}

"++"        		{return INC;}
"--"        		{return DEC;}
"\'"			{return APOSTROPHE;}
"\""			{return QUOTATION;}
"..."			{return ELLIPSIS; }
">>="			{return RIGHT_ASSIGN; }
"<<="			{return LEFT_ASSIGN; }
"+="			{return ADD_ASSIGN; }
"-="			{return SUB_ASSIGN; }
"*="			{return MUL_ASSIGN; }
"**="			{return POW_ASSIGN; }
"/="			{return DIV_ASSIGN; }
"%="			{return MOD_ASSIGN; }
"&="			{return AND_ASSIGN; }
"^="			{return XOR_ASSIGN; }
"|="			{return OR_ASSIGN; }
">>"			{return RIGHT_OP; }
"<<"			{return LEFT_OP; }
"<="			{return LE_OP; }
">="			{return GE_OP; }
"=="			{return EQ_OP; }
"!="			{return NE_OP; }
"<>"			{return LR_OP;}
"!"			{return EXA;}
";"			{return COL;}
"_"			{return '_';}
","			{return COMMA;}
":"			{return COLON;}
"="			{return EQUAL;}
"("			{nesting++; return LPAR;}
")"			{nesting--; return RPAR;}
"["			{return '[';}
"]"			{return ']';}
"{"			{return LBRA;}
"}"			{return RBRA;}
"."			{return DOT;}
"&"			{return AND_EXP;}
"@"			{return PAPAKI;}
"~"			{return '~';}
"-"			{return MINUS;}
"+"			{return PLUS;}
"%"			{return PERCENT;}
"<"			{return LESS_THAN_OP;}
">"			{return GREATER_THAN_OP;}
"^"			{return XOR;}
"|"			{return OR_SIGN;}
"`"			{return '`'; }
"*"			{return STAR;}
"**"			{return DOUBLESTAR;}
"/"			{return SLASH;}
"//"			{return DOUBLESLASH;}
				
{IDENTIFIER}		{	
				strcpy(yylval.nval.name, yytext);
				yylval.nval.type = IDENT;
				yylval.nval.data_type = LITERAL;
				printf("IDENTIFIER: %s\n", yytext);
				return IDENTIFIER;
			}

{DECINTEGER}		{	
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				printf("DECINTEGER: %s\n", yytext);
				return DECINTEGER;
			}
					
{OCTINTEGER}		{	
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				printf("OCTINTEGER: %s\n", yytext);
				return OCTINTEGER;
			}
					
{HEXINTEGER}		{	
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				printf("HEXINTEGER: %s\n", yytext);
				return HEXINTEGER;
			}

{POINTFLOAT}		{	yylval.nval.fval = atof(yytext);
				yylval.nval.type = FLOAT;
				yylval.nval.data_type = LITERAL;
				printf("POINTFLOAT: %s\n", yytext);
				return POINTFLOAT;
			}
					
{EXPONENTFLOAT}		{	yylval.nval.fval = atof(yytext);
				yylval.nval.type = FLOAT;
				yylval.nval.data_type = LITERAL;
				printf("EXPONENTFLOAT: %s\n", yytext);
				return EXPONENTFLOAT;
			}

{IMAGNUMBER}		{	
				printf("IMAGNUMBER: %s\n", yytext);
				return IMAGNUMBER;
			}
					

{SHORTSTRING}		{	strcpy(yylval.nval.string, yytext);
				yylval.nval.type = STRING;
				yylval.nval.data_type = LITERAL;
				printf("SHORTSTRING: %s\n", yytext);
				return SHORTSTRING;
			}

{LONGSTRING}		{	
				
				strcpy(yylval.nval.string, yytext);
				yylval.nval.type = STRING;
				yylval.nval.data_type = LITERAL	;
				printf("LONGSTRING: %s\n", yytext);
				return LONGSTRING;
			}
					


{NEWLINE}		{
				linee++;
						
			}
 

[ \r] 			{/* Do nothing */}


<<EOF>>  		{ return 0 ; }

%%
//Python Indentation 
void unputt(int leng){
	int last = leng - 1;
	
        while ((last >= 0)) {
                unput(yytext[last]);
                last--;}

}

unsigned int white_count(char* line) {
  unsigned int count = 0 ;

  while (*line == ' ' || *line == '\t'){
	if(*line == ' ')
		count++;
	else
		count = count + 8;
	
	line++;   
	     
 }
   
   return count;
}

void process_indent(char* line) {

 
  if (nesting)
    /* Ignore indents while nested. */
    return ;

  unsigned int indent = white_count(line) ;
 

  if ((indent ==level_start[level] && !flag) ||(flag && indent >level_start[level-1])) {
    
    level_start[level] = indent;
    flag=0;
    return ;
  }
  else if(flag){
	printf("Line:%d --> Indentation error\n",linee);
	return;}	

   if (indent > level_start[level] && !flag) {
	
    printf("Line:%d --> Indentation error\n",linee);
    return ;
  }
   
  int temp = level;
  while(indent != level_start[temp] && level >=0) {
    flag=0;
    temp--;
    
  }

  if(temp>=0)
	level = temp ;
  else
	printf("Line:%d --> Indentation error\n",linee);
return;



  
}
