#include <stdio.h>
#include<math.h>

int main()
{
    float arc_length, r;
  
    printf("Enter the arc length: ");
    scanf("%f", &arc_length);
    printf("Enter the radius: ");
    scanf("%f", &r);
  
    float angle = arc_length / r;
    printf("The angle of the segment is: %.2f", angle);
  
    return 0;
}
