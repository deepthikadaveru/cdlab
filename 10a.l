%{
#include <stdio.h>
%}

%%

"//".* printf("%s is a comment\n", yytext);
"int"|"float"|"char"|"if"|"else" printf("%s is a keyword\n", yytext);
[a-zA-Z_][a-zA-Z0-9_]*"()" printf("%s is a user declared function\n", yytext);
[a-zA-Z_][a-zA-Z0-9_]* printf("%s is an identifier\n", yytext);
[0-9]+ printf("%s is a constant\n", yytext);
[ \t\n]+ ;
. ;

%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("enter character: ");
    yylex();
    return 0;
}
