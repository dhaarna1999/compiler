%{
#include<stdio.h> 
#include<string.h> 
int blank=0,tabs=0,character=0,word=0,lines=0;
%}

%%
\n {lines++;word++;}
\t {tabs++;word++;}
[ ] {blank++;word++;}
.|\n {character++;}
%%

int yywrap(){};

int main(){
  extern FILE *yyin;
  yyin = fopen("read.txt","r");
  yylex();
  printf("blank spaces =%d\n",blank+tabs+lines-1);
  printf("character=%d\n",character);
  printf("word=%d\n",word);
  printf("lines=%d\n",lines);
  return 0;
}
