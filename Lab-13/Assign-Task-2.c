#include <stdio.h>
#include <math.h>

int sumByRecursion(int r, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        int sum = pow(r, n); //find the nth power of r

        //call for n-1
        return sum + sumByRecursion(r, n-1);
    }
}

int main()
{

    int r, n;

    printf("Enter the value of r and n: ");
    scanf("%d %d", &r, &n);

    printf("Sum of Geometric progression is : %d", sumByRecursion(r, n));

    return 0;

}
