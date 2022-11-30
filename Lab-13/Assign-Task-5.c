#include<stdio.h>

void prt_InWords(int n)
{
    int r = n % 10;
    n /= 10;
       
    if(n == 0 && r == 0)
        return;
    else
        prt_InWords(n);
    
    switch(r)
    {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
    }
}

int main()
{
    int N;
    
    printf("Enter an integer: ");
    scanf("%d", &N);
    
    prt_InWords(N);

    return 0;
}
