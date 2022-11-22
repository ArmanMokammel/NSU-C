#include <stdio.h>

// Defining the function for calculating factorial of a number
float Fact(float x)
{
    float fact = 1;
    
    /* Loop responsible for calcuating the factorial */
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    
    // Once we get the factorial value, we return the value to the caller of this function
    return fact;
}

// Defining the function to calculate the sum of the series
float sumSeries(float num)
{
    float sum = 0;
    
    /* 
       Loop responsible for calculating the sum of the series 
       For each value of i from 1 to num
       We keep on adding (i / i!) to the sum
    */
    for (int i = 1; i <= num; i++)
    {
        // Here Fact(i) is used to calculate i! (i Factorial)
        sum = sum + (i / Fact(i));
    }
    
    // Once we get the sum of the series, we return the sum value to the call of this function
    return sum;
}

// Our main function
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);
    
    // Storing the value return from the sumSeries function to "res"
    float res = sumSeries(n);
    
    // Can also be written as printf("Sum = %.2f", sumSeries(n)); directly without storing it to another variable
    printf("Sum = %.2f", res); 

    return 0;
}
