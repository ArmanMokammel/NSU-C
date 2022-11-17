#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    /* for each line i do the following loop */
    for(i = 1; i <= N; i++)
    {
        /* Calculating the spaces first 
           For each character j do the following loop */
        for(j = 1; j <= N - i; j++)
        {
            // print space
            printf(" ");
        }
        
        // After adding appropriate spaces check for 2 conditions
        // If i == 1 that is if it is first line or if i == N that is if it is last line
        if(i == 1 || i == N)
        {
            // print N number of characters
            for(j = 1; j <= N; j++)
            {
                printf("*");
            }
        }
        else
        {
            /* Otherwise for each character j of line i do the following loop */
            for(j=1; j<=N; j++)
            {
                // Check for 2 conditions
                // If j == 1 that is if it is first character or if j == N that is if it is last character
                if(j == 1 || j == N)
                {
                    printf("*");
                }
                else
                {
                    // print space
                    printf(" ");
                }
            }
        }
        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }
    
    return 0;
}
