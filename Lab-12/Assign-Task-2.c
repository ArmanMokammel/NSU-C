#include <stdio.h>

// Defining the function for calculating a to the power b
// This function is expected to return an integer
int Power(int a, int b)
{
    int val = 1;
    
    /* 
        Loop responsible for calculating the power of the number 'a'
        It starts from 1 and goes till b
        It will multiply a to itself b number of times
    */
    for(int i = 1; i <= b; i++)
    {
        val *= a;
    }
    
    // Once we get the value, we return it to the caller of this function
    return val;
}

// Our main function
int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    // Calling the Power function directly inside print statement
    printf("Power = %d", Power(a, b));

    return 0;
}
