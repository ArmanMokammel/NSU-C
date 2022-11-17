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
        
        // print i number of characters
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        
        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }
    
    return 0;
}
