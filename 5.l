%{
#include "y.tab.h"
%}



%%
"if" {return IF;}
[s][0-9]* {return stat;}
"<"|">"|"=="|"<="|">="|"!=" {return op;}
[0-9]+ {return num;}
[a-z][a-zA-Z0-9_]* {return iden;}
\n {return xyz;}
. {return yytext[0];}
%%

int yywrap()
{
return 1;
}
