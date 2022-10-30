#include <stdio.h>

int main()
{
    float b,h;
    float area;
    
    printf("Enter the base of Parallelogram: ");
    scanf("%f", &b);
    printf("Enter the base of Parallelogram: ");
    scanf("%f", &h);
  
    area = b * h;
    printf("Area of Parallelogram = %.2f",area);

    return 0;
}
