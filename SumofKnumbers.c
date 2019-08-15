#include <stdio.h>

int main()
{
    int num1,num2,sum=0;
    int arr[100];
    scanf("%d %d",&num1,&num2);
    for( int i=1;i<=num1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for( int i=1;i<=num2;i++)
    {
        sum+=arr[i];
    }
    printf("\n%d",sum);
    return 0;
}
