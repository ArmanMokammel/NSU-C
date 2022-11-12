#include <stdio.h>

int main()
{
    int num, org, r, num2 = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    org = num;

    while(num != 0)
    {
        r = num % 10;
        num2 = num2 * 10 + r;
        num /= 10;
    }

    while(num2 != 0)
    {
        r = num2 % 10;
        num2 /= 10;

        switch(r)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            default:
                printf("Incorrect value");
        }
    }

    return 0;
}
