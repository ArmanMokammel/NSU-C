#include <stdio.h>

int main()
{
    float C;
    printf("Enter Celsius: ");
    scanf("%f", &C);

    float F = (C * (9.0 / 5.0)) + 32.0; //The formula F=(C*(9/5)+32 . We use floats in the equation.

    printf("Fahrenheit value is = %.2f", F); //Correct to 2 decimal places
    /* The number of decimal places to be shown will be given */

    return 0;
}
