#include <stdio.h>
#include<math.h>

int main()
{
    float b,h;
  
    printf("Enter the length of right angled triangle: ");
    scanf("%f",&b);
    printf("Enter the height of right angled triangle: ");
    scanf("%f",&h);
  
    float hyp = sqrt(b*b + h*h);  //pythagoras theorem
    printf("Hypotenuse of triangle is %.2f ",hy);

    return 0;
}
