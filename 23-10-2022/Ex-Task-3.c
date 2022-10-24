#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if((num % 2 == 0) && (num % 5 == 0))
    {
        printf("The number %d is invalid as it is a multiple of both 2 and 5", num);
    }
    else if(num % 2 == 0)
    {
        printf("The number %d is a multiple of 2", num);
    }
    else if (num % 5 == 0)
    {
        printf("The number %d is a multiple 5", num);
    }

    return 0;
}
