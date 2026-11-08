%{ 
#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
%} 
%token VALID INVALID
%% 
S : VALID {printf("valid");} 
  | INVALID {printf("invalid");} 
  ;
%%
int main(){
	printf("Enter variable : ");
	yyparse();
	return 0;
} 
int yyerror(const char *s){ return 0; } 

