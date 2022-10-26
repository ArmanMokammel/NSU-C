#include <stdio.h>

int main()
{
    double salary, tax;

    printf("Enter your annual salary: ");
    scanf("%lf", &salary);

    if(salary == 0)
    {
        printf("Invalid Input");
    }
    else if(salary <= 14999.99)
    {
        tax = 0 + (salary-0)*0.15;
    }
    else if(salary >= 15000 && salary <= 29999.99)
    {
        tax = 2250 + (salary-15000)*0.18;
    }
    else if(salary >= 30000 && salary <= 49999.99)
    {
        tax = 5400 + (salary-30000)*0.22;
    }
    else if(salary >= 50000 && salary <= 79999.99)
    {
        tax = 11000 + (salary-50000)*0.27;
    }
    else if(salary >= 80000 && salary <= 149999.99)
    {
        tax = 21600 + (salary-80000)*0.33;
    }
    else
    {
        tax = 29700 + (salary-150000)*0.40;
    }

    printf("Your tax amount is: %.2lf", tax);

    return 0;
}
