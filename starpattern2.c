#include<stdio.h>
main()
{
    int i,j,n;
    printf("enter the nuber of rows"),
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<3)
            {
            
                {
                    if(i&&j<=2*n-1)
                     {
                         printf("*");
                    }      
            }
                printf("\n");
        }
            else if(i>3)
        {
            if(j>=2*n-1&&j<=i)
                {
                    printf("*");
                }
                 printf("\n");
        }
        }
        
    }
}