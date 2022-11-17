#include <stdio.h>

int main()
{
    int rows, i, j;
    char ch;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = rows - 1; j >= i; j--)
        {
            printf(" ");
        }

        for(ch = 'A'; ch < 'A' + (2*i) - 1; ch++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }
    return 0;
}
