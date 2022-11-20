#include <stdio.h>

int main()
{
    int st_num, i, j;

    printf("Enter Stage Number: ");
    scanf("%d", &st_num);

    for(i = 1; i <= st_num; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("#");
        }

        for(j = 1; j <= (2*st_num) - (2*i); j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("$");
        }

        printf("\n");
    }

    return 0;
}
