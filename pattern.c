#include<stdio.h>
int main()
{
    int n,i,j,x=65;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c ",x+j-1);
        }
        printf("\n");
    }
}