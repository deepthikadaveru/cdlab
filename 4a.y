%{ 
#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
%} 
%token I T A B C
%% 
S : I E T S S1
	| A 
	; 
S1 : C S 
	| 
	;
E : B 
	;
	
%%
int main(){
	printf("Enter STRING : ");
	if(yyparse()==0) printf("valid");
	else printf("invalid");
	return 0;
} 
int yyerror(const char *s){ return 0; } 

