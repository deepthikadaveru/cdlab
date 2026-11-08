%{
#include <stdio.h>
%}

%%

"+"|"-"|"*"|"/"|"%" printf("Arithmetic Op");
"==" | "!=" | ">=" | "<=" | ">"|"<" printf("Relational Op");
"&&"|"||"|"!" printf("Logical op");
"="|"+="|"-="|"*="|"/=" printf("Assignment op");
"++"|"--" printf("Increment/Decrement");
"&"|"|"|"^"|">>"|"<<"|"~" printf("bitwise");

%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("enter op: ");
    yylex();
    return 0;
}
