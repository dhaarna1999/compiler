%{
    #include<stdio.h>
	int f=0;

%}

%token l r

%%

start : p ; 
p : p p | l p r | ;
%%

int yyerror()

{
    printf("\nNot balanced!\n");
    f=1;
    return 0;

}

int main()

{

    printf("\n enter string : ");
    yyparse();
    if(!f)
    {
        printf("\nbalanced!\n");

    }

}



