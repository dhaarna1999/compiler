%{
    #include<stdio.h>
	int f=0;

%}

%token A B;

%%

start : s ;
s : A s B | ;

%%

int yyerror()

{
    printf("\nNot valid!\n");
    f=1;
    return 0;

}

int main()

{

    printf("\n enter string : ");
    yyparse();
    if(!f)
    {
        printf("\nvalid!\n");

    }

}



