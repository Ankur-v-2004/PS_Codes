#include<stdio.h>
/// @brief 
int main()
{
    int n,i,j,space,row;
    printf("Enter the number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(space=1;space<=row-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}