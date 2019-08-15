#include <stdio.h>

int main()
{
    int num,len=0;
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        ++len;
    }
    printf("%d",len);
    return 0;
}
