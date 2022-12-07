#include <stdio.h>

void search(char arr[], char key)
{
    for(int i = 0; arr[i] != NULL; i++)
    {
        if(arr[i] == key)
        {
            printf("\nFound\n");
            return;
        }
    }
    printf("\nNot Found\n");
}

int main()
{
    char search_key;
    char arr[50];

    printf("Enter string: ");
    scanf("%[^\n]", &arr);

    printf("Enter search key: ");
    scanf("%s", &search_key);

    search(arr, search_key);

    return 0;
}
