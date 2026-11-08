%{
#include <stdio.h>
int w=0;
int l=0;
%}

%%
[ \t]+ 		;
\n		l++;
[^ \t\n]+	w++;
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("enter character: ");
    yylex();
    printf("no.of words : %d\n",w);
    printf("no.of lines : %d",l);
    return 0;
}
