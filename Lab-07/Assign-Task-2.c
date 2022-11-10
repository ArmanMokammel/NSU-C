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

    if(x == org)
    {
        printf("%d is a palindrome.", org);
    }
    else
    {
        printf("%d is not a palindrome.", org);
    }

    return 0;
}
