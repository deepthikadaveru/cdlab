%{
#include <stdio.h>
%}

%%

[aeiouAEIOU] {printf("vowel");exit(0);}
[a-zA-Z] {printf("consonant");exit(0);}
. {printf("invalid input");exit(0);}

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
