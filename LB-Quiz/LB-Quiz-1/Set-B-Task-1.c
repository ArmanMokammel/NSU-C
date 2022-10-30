#include <stdio.h>

int main()
{
    float no_trans;

    printf("Enter no. of Transactions: ");
    scanf("%f", &no_trans);

    if(no_trans <= 10)
    {
        printf("Your Bank Fee is: 0 Tk.");
    }
    else if(no_trans >= 11 && no_trans <= 20)
    {
        printf("Your Bank Fee is: %.2f Tk.", (no_trans - 10) * 5);
    }
    else if(no_trans >= 21 && no_trans <= 30)
    {
        printf("Your Bank Fee is: %.2f Tk.", (10 * 5) + ((no_trans - 20) * 7.5));
    }
    else if(no_trans >= 31 && no_trans <= 40)
    {
        printf("Your Bank Fee is: %.2f Tk.", (10 * 5) + (10 * 7.5) + ((no_trans - 30) * 10));
    }
    else
    {
        printf("Your Bank Fee is: %.2f Tk.", (10 * 5) + (10 * 7.5) + (10 * 10) + ((no_trans - 40) * 12.5));
    }


    return 0;
}
