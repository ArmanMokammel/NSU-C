#include <stdio.h>

int main()
{
    int n, num = 0, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The first %d palindrome numbers are:\n", n);

    while(n != 0)
    {
        int r, x, rev = 0;

        x = num;

        while (x != 0)
        {
            r = x % 10;
            rev = rev * 10 + r;
            x /= 10;
        }

        if (num == rev)
        {
            printf("%d, ", num);
            n--;
        }
        num++;
    }

    return 0;
}
