#include <stdio.h>

int main()
{
    int n, r, x = 0, org;

    printf("Enter a number: ");
    scanf("%d", &n);

    org = n;

    while(n != 0)
    {
        r = n%10;
        n = n/10;
        x = x * 10 + r;
    }

    printf("The reverse of %d is %d", org, x);

    return 0;
}
