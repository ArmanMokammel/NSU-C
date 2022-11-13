#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
