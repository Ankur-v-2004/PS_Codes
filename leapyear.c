#include <stdio.h>

int main(void) {
    int y;
    printf("enter the year to check\n");
    scanf("%d",&y);
    (y%4==0)&&(y%100!=0)||(y%400==0)?printf("leap year"):printf("not leap year");
	return 0;
}

