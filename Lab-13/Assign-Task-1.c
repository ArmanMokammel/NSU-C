#include <stdio.h>

int main()
{
    int r, n, sum = 1;

    printf("Enter the value for r and n : ");

    scanf("%d %d", &r, &n);

    int a = r;

    for (int i =1; i<= n; i++)
    {
        sum += r;
        r *= a; //increase the power of r by 1
    }

    printf("Sum of geometric progression is : %d", sum);

    return 0;
}
