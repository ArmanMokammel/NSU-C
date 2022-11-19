/*
* Disclaimer: I am not responsible for your frustration
*/

#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    int firstHalf = rows/2;
    int secondHalf = rows/2 + 1;

    for(i = 1; i <= firstHalf; i++)
    {
        for(j = 1; j <= firstHalf - i + 1; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= (2*i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i = secondHalf; i >= 1; i--)
    {
        for(j = 1; j <= secondHalf - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= (2*i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
