%{
#include<stdio.h>
#include<stdlib.h>
int nest=0;
int e=0;
%}

%token IF stat op num iden xyz

%%
start : t xyz  {printf("No. of nested if statements = %d\n",nest);return 0;} ;
t : IF'('condtn')''{'t'}' {nest++;}  | stat ;
condtn : id op id ;
id : iden | num ;
%%

int yyerror( )
{
printf("incorrect statement\n");
e=1;
return 0;
}

main()
{
if(!e)printf("enter the statement\n");
yyparse();
}
