#include<stdio.h>
#include<string.h>
main()
{
    char s[30];
    int i,x;
    printf("enter the string");
    gets(s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>=97&&s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    puts(s);
}