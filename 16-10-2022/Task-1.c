#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float value;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    value = (5 * pow(x, 3)) - (4 * pow(x, 2)) + sqrt(x) + 3; //5x3-4x2+sqrt(x)+3
    /*
       (x*x*x) can also be written as pow(x, 3)
       (x*x*x*x) can also be written as pow(x, 4)
    */

    printf("\nThe value of 5x^3-4x^2+sqrt(x)+3 is:  %.2f\n", value); //Correct to 2 decimal places

    return 0;
}
