#include <stdio.h>

void calcCircleInfo(int radius, float* area, float* circumference)
{
    *area = 3.142 * radius * radius;
    *circumference = 2 * 3.142 * radius;
}

int main()
{
    int r;
    float a, c;
    printf("Enter Radius: ");
    scanf("%d", &r);

    calcCircleInfo(r, &a, &c);

    printf("Area = %f\n", a);
    printf("Circumference = %f\n", c);

    return 0;
}
