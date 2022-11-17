#include <stdio.h>

int main()
{
    int rows, i, j;
    char digit = '1';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    /* for each line i do the following loop */
    for(i = 1; i <= rows; i++)
    {
        /* for each character do the following loop */
        for(j = 1; j <= i; j++)
        {
            // check if digit is greater than 9... in this case put set it to 0
            if(digit > '9')
            {
                digit = '0';
            }
            printf("%c", digit);
            digit++; // increment digit
        }

        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }

    return 0;
}
