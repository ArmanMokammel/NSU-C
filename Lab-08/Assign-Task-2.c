#include <stdio.h>
#include <math.h>

int main()
{
    int bin, sum = 0, r, i = 0;

    printf("Enter binary number: ");
    scanf("%d", &bin);

    while(bin != 0)
    {
        r = bin % 10;
        sum += r * pow(2, i);
        bin /= 10;
        i++;
    }

    printf("The decimal number is: %d", sum);

    return 0;
}
