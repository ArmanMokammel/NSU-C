#include <stdio.h>

int main()
{
    int a,b,c;
    int Sum;

    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    Sum = a + b + c;

    if(Sum == 180 && a > 0 && b > 0 && c > 0) //We also check to make sure that there is no zero angle
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
    }

    return 0;
}
