#include <stdio.h>
#include<math.h>

int main()
{
    float pi=3.1415;
    float r,h;
    
    printf("Enter the radius of cone: ");
    scanf("%f", &r);
    printf("Enter the height of cone: ");
    scanf("%f", &h);
    
    float vol = (pi * pow(r, 2) * h) / 3; // 1/3 * pie * r^2 * h
  
    float area = pi * r * (r + sqrt(h * h + r * r)); // pie * r *(r + sqrt(r^2 + h^2))
  
    printf("Volume of Cone = %.2f\n",vol);
    printf("Surface area of Cone = %.2f",area);

    return 0;
}
