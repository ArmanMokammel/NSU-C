#include <stdio.h>

// Defining the function for calculating the sum of a series
// This function is expected to return an integer
int sumSeries(int r, int n)
{
    int sum = 1; // Initialise it with the first term's value
    
    /* 
        Loop responsible for calculating the sum of the series
        The first term during calculating will be r and then r^1 .... r^n
    */
    for(int i = 1; i <= n; i++)
    {
        int val = 1;
        
        /* 
            Loop responsible for calculating r to the power n
            Let's say i is 3
            val *= r --> r
            val *= r --> r^2
            val *= r --> r^3
            So we hve found the value of the fourth term of the series and third term in our calculation i.e. r^3
        */
        for(int j = 1; j <= i; j++)
        {
            val *= r;
        }
        
        // Then add the value of the term to the sum
        sum += val;
    }
    
    // Once we get the sum, we return its value to the caller of this function
    return sum;
}

// Our main function
int main()
{
    int r, n;

    printf("Enter r: ");
    scanf("%d", &r);
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Calling the sumSeries function directly inside print statement
    printf("Sum = %d", sumSeries(r, n));

    return 0;
}
