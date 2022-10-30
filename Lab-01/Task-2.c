#include <stdio.h>

int main()
{
    int A,B,C;
    float Avg;

    printf("Insert first number: ");
    scanf("%d", &A);

    printf("Insert second number: ");
    scanf("%d", &B);

    printf("Insert third number: ");
    scanf("%d", &C);

    Avg = (A + B + C) / 3.0; //We use 3.0 instead of 3 so that the output becomes a float instead of int

    printf("\nThe average is: %.1f\n", Avg); //The ".1" specifies the number of decimal places to be shown which in our case is 1 decimal place

    return 0;
}
