%{ 
#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
%} 
%token ID
%% 
E:E'+'E
  | E '-'E
  | E '*' E
  | E '/' E 
  |'(' E ')' 
  | ID
  ;
%%
int main(){
	printf("Enter expr : ");
	if(yyparse()==0) printf("valid");
	else printf("invalid");
	return 0;
} 
int yyerror(const char *s){ return 0; } 

