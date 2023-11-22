%{
    #include<stdio.h>
    int valid = 0;
%}

%%
([0-2][0-9]|3[0-2])\/(0[1-9]|1[0-2])\/([1-2][0-9][0-9][0-9]) {valid = 1;}
%%

int yywrap() {}
int main()
{
    yylex();
    if(valid==1)
    {
        printf("Date is valid");
    }
    else
    {
        printf("Date is invalid");
    }
    return 0;
}