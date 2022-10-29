#include <stdio.h>
#include<math.h>

int main()
{
    float r, vol;
  
    printf("Enter the radius: ");
    scanf("%f", &r);
  
    vol = (4/3) * (3.14 * pow(r,3));
    printf("The volume of sphere is: %.2f", vol);
  
    return 0;
}
