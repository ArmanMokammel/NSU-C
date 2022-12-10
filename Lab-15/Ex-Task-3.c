#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%[^\n]", &str);

    for(char A1 = 'A', A2 = 'a'; A1 <= 'Z'; A1++, A2++)
    {
        for(int i = 0; str[i] != NULL; i++)
        {
            if(str[i] == A1 || str[i] == A2)
            {
                printf("%c, ", A2);
                break;
            }
        }
    }

    return 0;
}
