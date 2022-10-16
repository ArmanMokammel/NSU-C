#include <stdio.h>
#include <math.h> //Include math.h library for the math functions like sqrt() and pow()

int main()
{
    int a,b,c;
    int Discriminant;
    float root1, root2;

    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);

    Discriminant = pow(b , 2) - (4 * a * c); //The discriminant [b^2 - 4ac]
    //Here pow(b , 2) is equal to (b*b)

    root1 = (-b + sqrt(Discriminant)) / (2 * a);
    root2 = (-b - sqrt(Discriminant)) / (2 * a);

    printf("The roots are: %f and %f", root1, root2);

    return 0;
}
