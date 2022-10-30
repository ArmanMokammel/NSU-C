#include <stdio.h>

int main()
{
    int x,y;
    int quotient1, quotient2;
    int remainder1, remainder2;

    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    quotient1 = x / y;
    remainder1 = x % y;

    quotient2 = y / x;
    remainder2 = y % x;

    printf("\nWhen x is divided by y, The value of quotient is: %d  and remainder is: %d\n", quotient1, remainder1);
    printf("When y is divided by x, The value of quotient is: %d  and remainder is: %d\n", quotient2, remainder2);

    return 0;
}
