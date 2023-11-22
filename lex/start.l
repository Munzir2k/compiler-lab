%option noyywrap
%%
^a {
    printf("Starts with a");
    }
. {
    printf("Does not start with a");
    }
%%

int main()
{
    yylex();
    return 0;
}