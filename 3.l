%{
    #include "y.tab.h";
%}

%%


[(]   return l;
[)] return r;
.           return yytext[0];
\n          return 0;

%%

int yywrap()
{
return 1;
}
