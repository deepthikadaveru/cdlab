%{
#include <stdio.h>
#include <ctype.h>
int yylex(void);
void yyerror(const char *s);
%}
%token NUM

%% 
S : E{printf("result : %d",$1);} ;
E : E '+' T {$$=$1+$3;}
	|T {$$=$1;}
	;
T : T '*' F {$$=$1*$3;}
	| F{$$=$1;}
	;
F : '(' E ')'{$$=$2;}
	|NUM {$$=$1;}
	;
%%
int main(){
	printf("enter expr : ");
	yyparse();
	return 0;
} 

void yyerror(const char *s){
	printf("invalid");
}
