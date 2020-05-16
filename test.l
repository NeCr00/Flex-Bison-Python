%{
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>



int nesting = 0 ;

unsigned int level = 0 ;
int level_start[100];

unsigned int first = 1 ;
unsigned int flag = 0;

void process_indent(char* line) ;
void unputt(int leng);
%}

PUNCT [-+*/=<>:]*
ID  [A-Za-z_][A-Za-z0-9_]*
INT [0-9]+

%option noyywrap

%%



^[ ]*\n       {/* Ignore blank lines. */}
^[ ]*[^ \n]  { process_indent(yytext);
		unputt(yyleng);	}

[\t]+.        {	while(*yytext =='\t'){
		printf("tab");
		yytext++;}
		}

"if("+.+")" {level++ ; flag = 1; printf(yytext);  REJECT;}

"("  {  nesting++ ; }
")"  {  nesting-- ; }
{ID}|{INT}|{PUNCT} {printf(" ") ;}

[ \r] {}
\n    {}

<<EOF>>  { process_indent("") ; return 0 ; }

%%

void unputt(int leng){
	int last = leng - 1;
        while ((last >= 0) &&(yytext[last] != ' ')) {
                unput(yytext[last]);
                last-- ;}
}

unsigned int white_count(char* line) {
  unsigned int count = 0 ;

  while (*line == ' ')
	count++,line++;        
 
   return count;
}

void process_indent(char* line) {

 
  if (nesting)
    /* Ignore indents while nested. */
    return ;

  unsigned int indent = white_count(line) ;
 

  if ((indent ==level_start[level] && !flag) ||(flag && indent >level_start[level-1])) {
    printf("normal");
    level_start[level] = indent;
    flag=0;
    return ;
  }
  else if(flag){
	printf("error1");
	return;}	

   if (indent > level_start[level] && !flag) {
	
    printf("error, go back");
    return ;
  }
   
  int temp = level;
  while(indent != level_start[temp] && temp >=0) {
    flag=0;
    temp--;
    
  }

  if(temp>=0)
	level = temp ;
  else
	printf("error");
return;
}

int main(int argc, char* argv[]) {
  for(int i=0; i<100; i++)
	level_start[i] = 0;
  yylex() ;
  printf("\n") ;
}