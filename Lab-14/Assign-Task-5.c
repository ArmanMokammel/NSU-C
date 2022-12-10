#include <stdio.h>

int main()
{
    char str[50];
    int strlen = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", &str);

    for(int i = 0; str[i] != NULL; i++)
    {
        strlen++;
    }

    for(int i = 0, j = strlen - 1; i <= (strlen/2) - 1; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("The string is a palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }

    return 0;
}
