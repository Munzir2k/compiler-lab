%{
    #include<stdio.h>
    #include<stdlib.h>
%}
%token NUM
%left '+''-'
%left '*''/'

%%
calclist:/* empty */
    | calclist exp '\n' {printf("Result: %d\n",$2);}
    ;
exp: NUM
    | exp '+' exp { $$ = $1 + $3; }
    | exp '-' exp { $$ = $1 - $3; }
    | exp '*' exp { $$ = $1 * $3; }
    | exp '/' exp {
        if($3==0)
        {
            yyerror("Division by zero");
            exit(1);
        }
        else
        {
            $$ = $1 / $3;
        }
    }
    | '('exp')' {$$ = $2;}
    ;
%%

int main()
{
    yyparse();
    return 0;
}
void yyerror(const char *s)
{
    fprintf(stderr,"%s\n",s);
}