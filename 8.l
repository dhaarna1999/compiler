%{
#include<stdio.h> 
#include<string.h> 
int vowel=0,consonants=0;
%}


%%
([IVXLCDM])* {printf("roman numeral : %s\n",yytext);}
.|\n ;
%%

int yywrap(void){} 

int main()
{
printf("enter string : ");
yylex();

return 0;
}
