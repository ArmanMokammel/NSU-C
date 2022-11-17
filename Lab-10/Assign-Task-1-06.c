#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter no. of rows: ");
    scanf("%d",&rows);

    /*
       for each line i do the following loop
       We start by printing the last line and at the end print the first line
    */
    for(i = rows; i >= 1; i--)
    {
        /* Calculating the spaces first
           For each character j do the following loop */
        for(j = 1; j <= rows - i; j++)
        {
           // print space
            printf(" ");
        }

        /* 
           for each character do the following loop
           let's say i is 2
           j will loop from 1 to ((2*2) - 1) i.e. 3 times
        */
        for(j = 1; j <= (2*i) - 1; j++)
        {
            printf("*");
        }

        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }

    return 0;
}
