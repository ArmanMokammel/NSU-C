#include <stdio.h>

int main() 
{
	  int n,i, spf = 1;

	  printf("Enter n: ");
	  scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        spf = spf * (spf * i);
    }

    printf("Super-factorial = %d", spf);

    return 0;
}
