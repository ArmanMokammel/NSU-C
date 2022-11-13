#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        if(i == 1 || i == N)
        {
            for(j = 1; j <= N; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1; j<=N; j++)
            {
                if(j == 1 || j == N)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
