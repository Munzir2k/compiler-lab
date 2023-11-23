#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    int n,i,j;
    char a[50][50];
    printf("Enter number of intermediate code: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter 3 address code %d: ",i+1);
        for(j=0;j<6;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    printf("\nGenerated code");
    for(i=0;i<n;i++)
    {
        printf("\nMOV %c, R%d",a[i][3],i);
        if(a[i][4]=='-')
        {
            printf("\nSUB %c, R%d",a[i][5],i);
        }
        if(a[i][4]=='+')
        {
            printf("\nADD %c, R%d",a[i][5],i);
        }
        if(a[i][4]=='*')
        {
            printf("\nMUL %c, R%d",a[i][5],i);
        }
        if(a[i][4]=='/')
        {
            printf("\nDIV %c, R%d",a[i][5],i);
            printf("\nMOV R%d, %c",i,a[i][5]);
            printf("\n");
        }
    }
    getch();
}