#include <stdio.h>

int main()
{
    float b1,b2,h;
    
    printf("Enter first base of Trapezium: ");
    scanf("%f", &b1);
  
    printf("Enter second base of Trapezium: ");
    scanf("%f", &b2);
  
    printf("Enter height base of Trapezium: ");
    scanf("%f", &h);
    
    float area = ((b1 + b2) / 2) * h;
    printf("Area of Trapezium = %.2f",area);
  
    return 0;
}
