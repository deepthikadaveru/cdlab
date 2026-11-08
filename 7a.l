%{
#include <stdio.h>
%}

%%

"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"  { printf("keyword"); }

[a-zA-Z]+    { printf("not a keyword"); }

%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("enter word: ");
    yylex();
    return 0;
}
