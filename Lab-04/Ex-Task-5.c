#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int Discriminant;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    Discriminant = pow(b, 2) - (4* a* c);

    if(Discriminant >= 0) //Check the nature of roots using Discriminant. If it is > or = to zero then real
    {
        float root1 = (-b + sqrt(Discriminant)) / (2 * a);
        float root2 = (-b - sqrt(Discriminant)) / (2 * a);

        printf("The real roots are: %.2f and %.2f", root1, root2);
    }
    else
    {
        printf("No real root exist.");
    }

    return 0;
}
