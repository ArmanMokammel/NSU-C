#include <stdio.h>
#include<math.h>

int main()
{
  float r;
  
  printf("Enter the radius: ");
  scanf("%f",&r);
  
  float vol = (4/3) * (3.14 * pow(r,3));
  printf("%.2f\n",vol);
  
  return 0;
}
