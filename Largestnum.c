#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Input : ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("Output : %d",a);
    else if((b>c)&&(b>a))
    printf("Output : %d",b);
    else
    printf("Output : %d",c);
    return 0;
}
