#include <stdio.h>

int Power(int a, int b)
{
    int val = 1;

    for(int j = 1; j <= b; j++)
    {
        val *= a;
    }

    return val;
}

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Power = %d", Power(a, b));

    return 0;
}
