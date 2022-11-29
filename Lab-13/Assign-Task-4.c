#include<stdio.h>

int sumOfDigitsByRecursion(int n)
{

    if(n==0) return 0;

    //add the last digit by taking the module with 10
    int lastDigit = n%10;

    //remove the last digit by dividing the number by 10 and call recursively for the remaining number
    int m = n/10;

    return lastDigit + sumOfDigitsByRecursion(m);

}

int main()
{

    int n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    printf("Sum of digits is : %d", sumOfDigitsByRecursion(n));

    return 0;
}
