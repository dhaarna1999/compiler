%{

%}

%%
-?([0-9]+)  {printf("'%s' is an integer operand\n",yytext);}
-?(([0-9]+)|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?) {printf("'%s' is an real number operand\n",yytext);}
[+\-*/]    {printf("'%s' is an operator\n",yytext);}
[\(] {printf("'%s' is an opening paranthesis\n",yytext);}
[\)] {printf("'%s' is an closing parenthesis\n",yytext);}
.|\n ;
%%

int yywrap(){};

int main(){
  printf("enter the input string :\n");
	yylex();
}
