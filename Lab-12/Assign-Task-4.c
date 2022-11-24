#include <stdio.h>

// Defining the function for reversing an integer
// This function is expected to return an integer
int Reverse(int n)
{
    int r, rev = 0;
    
    /* Loop responsible for reversing the input integer */
    while(n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    
    // Once we get the reverse integer, we return the value to the caller of this function
    return rev;
}

// Our main function
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    
    // Calling the Reverse function directly inside print statement
    printf("Reverse = %d", Reverse(n));

    return 0;
}
