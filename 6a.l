%{
#include "y.tab.h" 
%} 

letter [a-zA-Z]
digit [0-9]

%% 
{letter}({letter}|{digit})* { printf("Identifier"); exit(0);}
. printf("not an id");
%% 

int yywrap(){ return 1; } 
int main(){
	printf("enter string : ");
	yylex();
	return 0;
} 


