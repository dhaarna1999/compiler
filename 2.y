%{
    #include<stdio.h>
	int f=0;

%}

%token alpha digit 

%%

start : alpha i ; 
i : alpha i  | digit i  | ;
%%

int yyerror()

{
    printf("\nNot an identifier!");
    f=1;
    return 0;

}

int main()

{

    printf("\n enter string : ");
    yyparse();
    if(!f)
    {
        printf("\nIdentifier!");

    }

}



