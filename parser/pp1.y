%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "y.tab.h"
    void yyerror(char *s);
    int yylex();
}

%token Zero One;

%%
smtm: S;
S:SA | A;
A:Zero Zero | One One;
%%
int main()
{
    yyparse();
    printf("Accepted");
}
void yyerror(char *s)
{
    printf("Not Accepted");
    exit(0);
}