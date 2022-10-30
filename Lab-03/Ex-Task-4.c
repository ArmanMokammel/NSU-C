#include <stdio.h>

int main()
{
    float x1, x2;
    float y1, y2;
    float midx, midy;

    printf("Enter x1: ");
    scanf("%f", &x1);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y2: ");
    scanf("%f", &y2);

    midx = (x1+x2)/2;
    midy = (y1+y2)/2;

    printf("\nThe midpoint is: (%.2f , %.2f)\n", midx, midy);

    return 0;
}
