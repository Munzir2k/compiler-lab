%{
#include<stdio.h>
#include<stdlib.h>
int flag = 0;
%}

%%
[a-z.0-9]+@[a-z]+".com"|".in"|".education" {flag=1;}
%%

int yywrap(){}
int main()
{
    printf("enter email: ");
    yylex();
    if(flag == 1)
        printf("Valid\n");
    else
        printf("Invalid");
}