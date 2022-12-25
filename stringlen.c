#include<stdio.h>
main()
{
    int i,j;
    char s[10];
    printf("enter the string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    printf("%d",i);
}