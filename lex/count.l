%{
#include<stdio.h>
int l=0,w=0,c=0;
%}

%%
[\n] {l++; c+= yyleng;}
[^\t\n]+ {w++,c+=yyleng;}
%%

int yywrap() {return 1;}
int main()
{
    printf("Enter text: ");
    yylex();
    printf("\nNumber of lines: %d",l);
    printf("\nNumber of chars: %d",c);
    return 0;
}