#include <stdio.h>

int main()
{
    char str[100];
    int lowercase = 0, uppercase = 0;

    printf("Enter string: ");
    scanf("%[^\n]", &str);

    for(int i = 0; str[i] != NULL; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            uppercase++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lowercase++;
        }
    }

    printf("\nNo. of uppercase letters: %d\n", uppercase);
    printf("No. of lowercase letters: %d\n", lowercase);

    return 0;
}
