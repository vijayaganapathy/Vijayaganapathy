#include <stdio.h>
int main()
{
    int n, revint = 0, rmd, orgint;
    scanf("%d", &n);
    orgint = n;
    while( n!=0 )
    {
        rmd = n%10;
        revint = revint*10 + rmd;
        n /= 10;
    }
    if (orgint == revint)
        printf("yes");
    else
        printf("no");
    
    return 0;
}
