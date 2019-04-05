%{
#include<stdio.h> 
#include<string.h> 

%}


%%
([a-zA-Z0-9_])*@([a-zA-Z0-9.])* printf("id : %s\n",yytext);
.|\n ;
%%

int yywrap(void){} 

int main()
{
printf("enter string : ");
yylex();

return 0;
}
