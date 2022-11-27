#include <stdio.h>

int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(int i = N; i >= 1; i--)
    {
        int num = 1;
        int flag = 0;

        for(int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        for(int j = 1; j <= (2*i) - 1; j++)
        {
            if(j == (2*i)/2)
            {
                flag = 1;
            }

            printf("%d", num);

            if(flag == 0)
            {
                num++;
            }
            else
            {
                num--;
            }
        }
        printf("\n");
    }

    return 0;
}
