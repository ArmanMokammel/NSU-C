#include <stdio.h>

int main()
{
    float a,b;
    char op;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    printf("Enter operator: ");
    scanf(" %c", &op);
    
    if(op == '+')
    {
        printf("%.1f + %.1f = %.1f", a, b, (a + b));
    }
    else if(op == '-')
    {
        printf("%.1f - %.1f = %.1f", a, b, (a - b));
    }
    else if(op == '*')
    {
        printf("%.1f * %.1f = %.1f", a, b, (a * b));
    }
    else if(op == '/')
    {
        printf("%.1f / %.1f = %.1f", a, b, (a / b));
    }
    else
    {
        printf("Invalid operator");
    }
    
    return 0;
}
