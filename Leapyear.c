#include <stdio.h>

int main()
{
    int year;
    printf("Input : ");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    printf("yes");
    else
    printf("Output : no");
    return 0;
}
