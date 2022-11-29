#include<stdio.h>

double factorialByRecursion(double x)
{
    if(x==0 || x==1)
    {
        return 1;
    }

    return x * factorialByRecursion(x-1);
}

double sumByRecursion(double n)
{
    if(n==1)
    {
        return 1;
    }

    double sum = n / factorialByRecursion(n) ; //something like 3/3!

    return sum + sumByRecursion(n-1);
}

int main()
{
    double n;

    printf("Enter the value for n : ");
    scanf("%lf", &n);

    printf("Sum of geometric progression is : %lf", sumByRecursion(n));

    return 0;
}
