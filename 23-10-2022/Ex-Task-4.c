#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("%d is a multiple of both 5 and 11", num);
    }
    else if(num % 5 == 0)
    {
        printf("%d is a multiple of 5", num);
    }
    else if (num % 11 == 0)
    {
        printf("%d is a multiple 11", num);
    }
    else
    {
        printf("%d is a not a multiple of 5 and 11", num);
    }

    return 0;
}
