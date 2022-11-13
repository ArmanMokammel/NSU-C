#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);
    
    /* for each line i do the following loop */
    for(i=1; i<=N; i++)
    {
        /* Calculating the spaces first 
           For each character j do the following loop */
        for(j = 1; j <= N - i; j++)
        {
            // print spaces
            printf(" ");
        }
        
        /* For each character j of line i do the following loop */
        for(j=1; j<=i; j++)
        {
            // Check for 3 conditions
            // If j == 1 that is if it is first character or if j == i that is if it is the last character of if i == n that is if it is the last line
            if(j==1 || j==i || i==N)
            {
                printf("*");
            }
            else
            {
                // print spaces
                printf(" ");
            }
        }        
        //print a new line character at the end of each line (loop of i) for the display to go to the next line below it
        printf("\n");
    }

    return 0;
}
