#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter no. of rows: ");
    scanf("%d",&rows);
    
    /* for lines 1 to half of input do the following loop */
    for(i = 1; i <= rows/2; i++)
    {
        /* print i number of characters*/
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n"); //new line at the end of loop
    }
    
    /* For the rest of the lines we go reverse and print the last line first and the first line last */
    for(i = rows; i > rows/2; i--)
    {
        /* 
           for each character j do the following loop
           let's say i is 7 & rows is 9
           j will loop from 1 to 7 - (9/2) i.e. 3
        */
        for(j = 1; j <= i - (rows/2); j++)
        {
            printf("*");
        }
        printf("\n"); //new line at the end of loop
    }

    return 0;
}
