#include <stdio.h>

int Reverse(int n)
{
    int r, rev = 0;

    while(n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    return rev;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Reverse = %d",Reverse(n));

    return 0;
}
