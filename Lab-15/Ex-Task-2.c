#include <stdio.h>

int main()
{
    char str[100];
    char str2[100];
    int j = 0;

    printf("Enter string: ");
    scanf("%[^\n]", &str);

    for(int i = 0; str[i] != NULL; i++)
    {
        char c = str[i];
        if(c != 'A' && c != 'a' && c != 'E'&& c != 'e' && c != 'I' && c != 'i' && c != 'O' && c != 'o' && c != 'U' && c != 'u')
        {
            str2[j] = str[i];
            j++;
        }
    }

    str2[j] = '\0'; //Must have a line terminator at the end of the string

    printf("%s", str2);

    return 0;
}
