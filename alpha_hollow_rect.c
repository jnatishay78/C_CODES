#include<stdio.h>
int main()
{int i,j;
    for(i=1;i<=5;i++)
    {for(j=1;j<=5;j++)
        {if(j==5 || j==1 || i==1 || i==5)
                printf("%c ",j+64);
            else
                printf("  ");}
        printf("\n");}
    return 0;}
