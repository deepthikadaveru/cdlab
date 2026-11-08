%{ 
#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
%} 
%token ID 
%% 
E : E '+' T { printf("\n + \n");
		printf("/ \\\n");
		printf("%c   %c\n",$1,$3);
		$$='+';
		printf("operator : +");
	    } 
   | T { $$=$1;} 
   ;
T : T '*' F { printf("\n * \n");
		printf("/ \\\n");
		printf("%c   %c\n",$1,$3);
		$$='*';
		printf("operator : *");
	}
	| F { $$ =$1;} 
	;
F : '(' E ')' { $$=$2;} 
	| ID { $$=$1;} 
	;
%% 

int main() { 
	printf("enter expr: ");
	yyparse();
	return 0;
} 
int yyerror(const char *s) { return 0; } 
	
	
	
	
	    
