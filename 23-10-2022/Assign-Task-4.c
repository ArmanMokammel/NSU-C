#include <stdio.h>

int main()
{
    float n;
     
    printf("Enter a number: ");
    scanf("%f", &n);
    
    // Converts n from float to integer using type casting and compares with the original
    if(n == (int)n) // Or you can use (n - (int)n == 0)
    {
        printf("The number is an integer.");
    }
    else
    {
        printf("The number is not an integer.");
    }
     
    return 0;
}
