%{
    #include "y.tab.h";
%}

%%


[-+*\/]   return op;
[0-9]* return num;
[(]  return l;
[)]  return r;
.           return yytext[0];
\n          return 0;

%%

int yywrap()
{
return 1;
}
