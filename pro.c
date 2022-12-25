#include<stdio.h>
void main()
{
    int a[100],i=0,b,x,j;
    printf("enter the numberof elements in array");
    scanf("%d",&b);
    printf("enter the number to be inserted");
    scanf("%d",&x);
    printf("enter the sorted array");
    for(i=0;i<=x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>=x&&a[i+1]>=x)
        {
            break;
        }
    }
    for(j=b;j<=i;j--)
    {
        a[j]==a[j-1];
    }
    a[i]==x;
    for(i=0;i<=b;i++)
    {
        printf("%d",a[i]);
    }
}