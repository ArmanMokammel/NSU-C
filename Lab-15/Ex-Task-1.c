#include <stdio.h>

int main()
{
    char str[100];
    int vowels = 0;

    printf("Enter string: ");
    scanf("%[^\n]", &str);

    for(int i = 0; str[i] != NULL; i++)
    {
        char c = str[i];
        if(c == 'A' || c == 'a' || c == 'E'|| c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        {
            vowels++;
        }
    }

    printf("\nThere are %d vowels in the string\n", vowels);

    return 0;
}
