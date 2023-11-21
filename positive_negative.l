%{
int positive = 0, negative = 0;
%}
%%
^[-][0-9]+ {negative++;
printf("Negative: %s",yytext);}
[0-9]+ {positive++;
printf("Positive: %s",yytext);}
%%
int yywrap(){}
int main()
{
    yylex();
    printf("Positive: %d, Negative: %d",positive,negative);
}