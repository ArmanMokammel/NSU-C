#include <stdio.h>

int main()
{
    int min, max, cmr;
    int sum = 0, i;
    
    printf("Enter minimum: ");
    scanf("%d", &min);
    printf("Enter maximum: ");
    scanf("%d", &max);
    printf("Enter Common ratio: ");
    scanf("%d", &cmr);
    
    for(i = min; i <= max; i = i * cmr)
    {
        sum += i;
    }
    
    printf("Sum = %d", sum);
    
    return 0;
}
