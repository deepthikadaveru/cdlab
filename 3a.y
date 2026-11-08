%{
#include <stdio.h>
#include <ctype.h>
int yylex(void);
int yyerror(const char *s);
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
int yylex(void){
	int c;
	while((c=getchar())==' ' || c=='\t')
		;
	if(c=='\n' || c==EOF) return 0;
	if(isdigit(c)){
		yylval=c-'0';
		return NUM;
	}
	return c;
} 

int main(){
	printf("enter expression : ");
	yyparse();
	return 0;
}

int yyerror(const char *s) { return 0;} 











