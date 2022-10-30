#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, r1;
    float x2, y2, r2;
    float x;

    printf("Enter the x- , y-coordinate and radius of circle1: ");
    scanf("%f%f%f", &x1, &y1, &r1);
    printf("Enter the x- , y-coordinate and radius of circle2: ");
    scanf(" %f%f%f", &x2, &y2, &r2);

    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if(r1 - r2 < 0)
    {
        x = -(r1 - r2);
    }

    if(distance <= x)
    {
        printf("circle2 is inside circle1");
    }
    else if(distance <= r1 + r2)
    {
        printf("circle2 is overlaping circle1"); 
    }
    else
    {
        printf("circle2 does not overlap circle1");
    }

    return 0;
}
