#include <stdio.h>

int main()
{
    float r, a;

    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Enter side of square: ");
    scanf("%f", &a);

    /*
        a^2 = b^2 + c^2 (Pythagorean Theorem) where a is diameter and b & c is square side
        Therefore, (2*r)^2 = a^2 + a^2
                   (2*r)^2 = 2(a^2)
                   2*r = sqrt(2) * a

        Where 2*r is Diameter
    */
    if(2*r >= sqrt(2)*a) // use >= so that any square below it's maximum size will fit
    {
        printf("The square will fit");
    }
    else
    {
        printf("The square will not fit");
    }

    return 0;
}
