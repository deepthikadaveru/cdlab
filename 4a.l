%{
#include "y.tab.h" 
%} 

%% 
i return I;
t return T;
a return A;
b return B;
c return C;
\n return 0;
[ \t] ;
. return yytext[0];
%% 

int yywrap(){ return 1; } 

