#include <stdio.h>
int main()
{
    int num,exp1;
    int result = 1;
    scanf("%d %d", &num,&exp1);
    while (exp1 != 0)
    {
        result *= num;
        --exp1;
    }
    printf("%d", result);
    return 0;
}
