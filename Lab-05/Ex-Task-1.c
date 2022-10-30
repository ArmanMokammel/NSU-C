#include <stdio.h>

int main()
{
    char a;
    
    printf("Enter the first letter of fruit: ");
    scanf("%c", &a);
        
    if(a == 'M')
    {
        printf("Mango ---- Tk.500/kg");
    }
    else if(a == 'A')
    {
        printf("Apple ---- Tk.250/kg");
    }
    else if(a == 'B')
    {
        printf("Banana ---- Tk.130/kg");
    }
    else if(a == 'C')
    {
        printf("Cherry ---- Tk.270/kg");
    }
    else
    {
        printf("Invalid fruit letter");
    }
    
    return 0;
}
