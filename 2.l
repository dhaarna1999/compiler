%{
    #include "y.tab.h";
%}

%%


[_a-zA-Z]   return alpha;
[0-9]     return digit;
.           return yytext[0];
\n          return 0;

%%

int yywrap()
{
return 1;
}
