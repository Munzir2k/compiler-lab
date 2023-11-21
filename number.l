%{
%}

%option noyywrap

%%
[1-9][0-9]{9} {printf("Valid phone number");}
.+ {printf("Not valid phone number");}
%%

int main()
{
    yylex();
    return 0;
}