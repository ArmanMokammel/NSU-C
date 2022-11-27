#include <stdio.h>

int binConversion(int num)
{
    int r, rev_bin = 0, bin = 0;
    int temp = num;

    while(temp != 0)
    {
        r = temp % 2;
        rev_bin = rev_bin * 10 + r;
        temp /= 2;
    }

    while(rev_bin != 0)
    {
        r = rev_bin % 10;
        bin = bin * 10 + r;
        rev_bin /= 10;
    }

    return bin;
}

int checkEligibility(int N)
{
    int count = 0, r;

    while(N != 0)
    {
        r = N % 10;

        if(r == 1)
        {
            count++;
        }

        N /= 10;
    }

    if(count == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    if(checkEligibility(binConversion(N)) == 1)
    {
        printf("Yes, you can include this item.");
    }
    else
    {
        printf("Sorry, you can't include this item.");
    }

    return 0;
}
