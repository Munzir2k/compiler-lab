#include<stdio.h>
#include<string.h>

struct op
{
    char l;
    char r[20];
}
op[10],pr[10];

int main()
{
    int a,i,j,n,z=0;
    char temp,t;
    char *p,*l;

    printf("Enter number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter left item for %d: ",i+1);
        scanf(" %c",&op[i].l);
        printf("Enter right item for %d: ",i+1);
        scanf("%s",&op[i].r);
    }

    printf("\nIntermediate Code\n");
    for(i=0;i<n;i++)
    {
        printf("%c=",op[i].l);
        printf("%s\n",op[i].r);
    }

    for(i=0;i<n-1;i++)
    {
        temp=op[i].l;
        for(j=0;j<n;j++)
        {
            p = strchr(op[j].r,temp);
            if(p)
            {
                pr[z].l=op[i].l;
                strcpy(pr[z].r,op[i].r);
                z++;
            }
        }
    }
    pr[z].l=op[n-1].l;
    strcpy(pr[z].r,op[n-1].r);
    z++;

    printf("\nAfter Code Elimination\n");
    for(i=0;i<z;i++)
    {
        printf("%c=",pr[i].l);
        printf("%s\n",pr[i].r);
    }
    printf("\Eliminate Common Expression\n");
    for(i=0;i<z;i++)
    {
        printf("%c=",pr[i].l);
        printf("%s\n",pr[i].r);
    }
    printf("\nCode Optimization\n");
    for(i=0;i<z;i++)
    {
        printf("%c=",pr[i].l);
        printf("%s\n",pr[i].r);
    }
}