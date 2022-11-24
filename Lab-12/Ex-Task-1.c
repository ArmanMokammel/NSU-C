#include <stdio.h>
#include <math.h>

float Diameter(float r);
float Area(float r);
float Circumference(float r);

int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Diameter = %.2f\n", Diameter(radius));
    printf("Area = %.2f\n", Area(radius));
    printf("Circumference = %.2f", Circumference(radius));

    return 0;
}

float Diameter(float r)
{
    return 2*r;
}

float Area(float r)
{
    return M_PI * r*r;
}

float Circumference(float r)
{
    return 2*M_PI*r;
}
