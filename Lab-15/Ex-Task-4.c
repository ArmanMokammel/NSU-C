#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%[^\n]", &str);

    for(char A1 = 'A', A2 = 'a'; A1 <= 'Z'; A1++, A2++)
    {
        int count = 0, flag = 0;
        for(int i = 0; str[i] != NULL; i++)
        {
            if(str[i] == A1 || str[i] == A2)
            {
                flag = 1;
                count++;
            }
        }

        if(flag == 1)
        {
            printf("%c/%c: %d\n", A2, A1, count);
        }
    }

    return 0;
}
