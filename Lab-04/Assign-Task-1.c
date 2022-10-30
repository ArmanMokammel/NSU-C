#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    if((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
    }

    return 0;
}
