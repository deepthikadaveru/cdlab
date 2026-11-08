%{
#include "y.tab.h" 
%} 

%% 
[a-zA-Z][a-zA-Z0-9]* return VALID;
\n		return 0;
[ \t] 		;
.		return INVALID;
%% 

int yywrap(){ return 1; } 

