#include <stdio.h>

void prt_NaturalNum(int n)
{
    if(n == 1)
    {
        printf("1");
    }
    else
    {
        printf("%d, ", n);
        prt_NaturalNum(n-1);
    }
}

int main()
{
    int N;

    printf("Enter n: ");
    scanf("%d", &N);

    prt_NaturalNum(N);

    return 0;
}
