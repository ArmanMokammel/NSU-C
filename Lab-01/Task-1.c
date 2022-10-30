#include <stdio.h>

int main()
{
    int A,B;
    int Sum, Product, Difference, Quotient, Remainder;

    printf("Insert first number: ");
    scanf("%d", &A);

    printf("Insert second number: ");
    scanf("%d", &B);

    Sum = A + B;
    Product = A * B;
    Difference = A - B;
    Quotient = A / B;
    Remainder = A % B;

    printf("Sum = %d\n", Sum);
    printf("Product = %d\n", Product);
    printf("Difference = %d\n", Difference);
    printf("Quotient = %d\n", Quotient);
    printf("Remainder = %d\n", Remainder);

    return 0;
}
