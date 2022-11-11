#include <stdio.h>

int main()
{
    int num1, num2, min, gcd, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    min = num1 < num2 ? num1 : num2; // Taking the lowest input value

    for(i = min; i >= 1; i--) // We start with the lowest input value and decrement by one... #efficient_code
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i; // Found goddammit
            break;
        }
    }

    printf("GCD of %d and %d is %d", num1, num2, gcd);

    return 0;
}
