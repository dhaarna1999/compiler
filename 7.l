%{

%}

%%

[a-zA-Z ]+  {	int a=0,b=0,c=0,i=0;
	
	while(yytext[i]=='a'&&i<yyleng){
		a++;
		i++;
	}
	while(yytext[i]=='b'&&i<yyleng){
		b++;
		i++;
	}
	while(yytext[i]=='c'&&i<yyleng){
		c++;
		i++;
	}
	if(b==a+2 && c==a*2 && i==yyleng){
		printf("satifies the expression\n");
	}
	else{
		printf("does not satify the expression\n");
	}}
.|\n ;
%%

int yywrap(){};

int main(){
  printf("enter the input string :\n");
	yylex();
}
