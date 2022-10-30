#include <stdio.h>
#include <math.h> //Include math.h library for the math functions like sqrt() and pow()

int main()
{
    int a,b,c;
    int Discriminant;
    float root1, root2; //We use float so that it can store and output decimal values.

    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);

    Discriminant = pow(b , 2) - (4 * a * c); //The discriminant [b^2 - 4ac]
    //Here pow(b , 2) is equal to (b*b)

    root1 = (-b + sqrt(Discriminant)) / (2 * a); //BRACKETS ARE VERY IMPORTANT!!!
    root2 = (-b - sqrt(Discriminant)) / (2 * a);

    printf("The roots are: %.2f and .2f", root1, root2); //Answer in 2 decimal places

    return 0;
}
