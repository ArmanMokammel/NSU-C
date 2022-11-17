#include <stdio.h>

int main()
{
    int rows, i, j;
    char ch;
    
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
        
        /* 
           Let's take A as 65 & i as 2
           The loop's condition will be from 65 to ((2 * 2) - 1) i.e. 68
           This means the loop will run 3 times and will print 3 characters A, B & C
        */
        for(ch = 'A'; ch < 'A' + (2*i) - 1; ch++)
        {
            printf("%c", ch);
        }
        
        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }
    return 0;
}
