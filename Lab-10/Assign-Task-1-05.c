#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter no. of rows: ");
    scanf("%d",&rows);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        /* for each character j do the following loop */           
        for(j = 1; j <= i; j++)
        {
            // check if j is even then print 1.. else print 0
            if(j % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        /*
            The code written above can also be done like this:
            
            char bin = '0';
            for(j = 1; j <= i; j++)
            {
                if(bin > '1')
                {
                    bin = '0';
                }
                printf("%c", bin);
                bin++;
            }
        */

        printf("\n");
    }
    return 0;
}
