#include <stdio.h>

// Defining the function for calculating the sum of a series
// This function is expected to return an int
int seriesSum(int num)
{
    int sum = 0;
    
    /* Loop responsible for calcuating the sum of the series */
    for(int i = 1; i <= num; i++)
    {
        sum += i * i;
    }
    
    // Once we get the sum, we return the value to the caller of this function
    return sum;
}

// Our main function
int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);
    
    // Calling the seriesSum function directly inside print statement
    printf("Sum = %d", seriesSum(N));

    return 0;
}
