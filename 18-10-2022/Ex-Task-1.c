#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("%d",n&1);
  
  return 0;
  
  /* The obervation is: For even numbers, n&1=0 and for odd numbers n&1 = 1 */
  
}
