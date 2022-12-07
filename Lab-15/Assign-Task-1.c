#include <stdio.h>

int main()
{
  	char str[100];

  	printf("Please Enter Any String : ");
  	scanf("%[^\n]", &str);

  	for(int i = 0; str[i] != NULL; i++)
  	{
  		for(int j = i + 1; str[j] != NULL; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(int k = j; str[k] != NULL; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}

	printf("\nFinal String after Removing All Duplicates :\n%s\n", str);

  	return 0;
}
