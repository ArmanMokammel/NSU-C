#include <stdio.h>
#include<math.h>

int main()
{
    int m,n;
  
    printf("Enter the numbers: ");
    scanf("%d%d",&n,&m);
  
    printf("%.0f\n", m*pow(2,n)); // m * 2^n
    printf("%d",m<<n);
  
    return 0;
  
    /* The observation is: Both the values are equivalent */
  
}
