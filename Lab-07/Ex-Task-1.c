#include <stdio.h>

int main()
{
    int num, remainder;

    printf("Enter a number ");
    scanf("%d",&num);

    printf("Last digit is %d\n", num % 10);

    while(num != 0)
    {
        remainder = num % 10;
        num = num / 10;
    }

    printf("First digit is %d\n", remainder);

    return 0;
}
