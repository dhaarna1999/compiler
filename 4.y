%{
    #include<stdio.h>
	int f=0;

%}

%token l r num op;

%%

start : e ;
e : l e r | e op e | num ;

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



