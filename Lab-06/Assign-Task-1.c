#include <stdio.h>

int main()
{
    int n, i, j;
    float sum = 0;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    while(i <= n)
    {
        sum += i*i;
        i += j;
        j += 2;
    }
    
    /*
    for(i = 5, j = 4; i <= n; i+=j, j+=2)
    {
        sum += i*i;
    }
    */
    
    printf("Sum = %0.0f", sum);
    
    return 0;
}
