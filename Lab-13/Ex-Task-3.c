#include <stdio.h>

int Power(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    else
    {
        return a * Power(a, b-1);
    }
}

int main()
{
    int A,B;

    printf("Enter a: ");
    scanf("%d", &A);
    printf("Enter b: ");
    scanf("%d", &B);

    printf("Power = %d", Power(A , B));

    return 0;
}
