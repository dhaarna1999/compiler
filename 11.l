%{

%}

%%
-?([0-9]+)  {printf("'%s' is an integer\n",yytext);}
-?(([0-9]+)|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) {printf("'%s' is a real number\n",yytext);}
("//")[a-zA-Z\-_!@#$%^&*\t0-9 ]*  {printf("'%s' is a comment\n",yytext);}
("/*")[a-zA-Z\-_!@#$%^&*\n\t0-9 ]*("*/")  {printf("'%s' is a comment\n",yytext);}
[a-zA-Z_][a-zA-Z_0-9]*   {printf("'%s' is an identifier\n",yytext);}
.|\n ;
%%

int yywrap(){};

int main(){
printf("enter code : \n");
  yylex();
  return 0;
}
