#include <stdio.h>

int main()
{
    int code, org, sum = 0;
    int r;

    printf("Enter coupon code: ");
    scanf("%d", &code);

    org = code;

    while(code != 0)
    {
        r = code % 10;
        sum += r * r * r;
        code /= 10;
    }

    if(sum == org)
    {
        printf("The coupon code holder is a Winner!");
    }
    else
    {
        printf("The coupon code holder is a Loser!");
    }

    return 0;
}
