#include <stdio.h>

int main()
{
    int i, j, rows;
    char digit = '1';

    printf("Enter no. of rows: ");
    scanf("%d",&rows);

    /* for each line i do the following loop */
    for(i = 1; i <= rows; i++)
    {
        /* Calculating the spaces first
           For each character j do the following loop */
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        
        /* 
           for each character do the following loop
           let's say i is 2
           j will loop from 1 to ((2*2) - 1) i.e. 3
        */
        for(j = 1; j <= (2*i) - 1; j++)
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
