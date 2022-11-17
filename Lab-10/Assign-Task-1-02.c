#include <stdio.h>

int main()
{
    int rows, i, j;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    /* for each line i do the following loop */
    for(i = 1; i <= rows; i++)
    {
        /* Calculating the spaces first
           For each character j do the following loop */
        for(j = rows - 1; j >= i; j--)
        {
            // print space
            printf(" ");
        }

        /* The loop will run i times */
        for(j = 1; j <= i; j++)
        {
            // print a character with a space after it
            printf("%c ", ch);
        }
        ch++; // After end of each line (loop of i) increment the decimal value of ch

        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }
    return 0;
}
