#include <stdio.h>

int main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if((a >= '0' && a <= '9') || (a >= 'A' && a <= 'F'))
    {
        printf("It is a valid hexadecimal character.");
    }
    else
    {
        printf("It is not a valid hexadecimal character.");
    }

    return 0;
}
