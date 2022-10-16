#include <stdio.h>
#define PI 3.142

int main()
{
    int height, radius, length;
    float volume;

    printf("Enter the length of the cube: ");
    scanf("%d", &length);

    volume = length * length * length; //This can also be written as pow(length, 3) but make sure to include math.h

    printf("Volume of Cube: %.2f\n", volume);

    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &radius);

    volume = PI * (radius * radius) * height;
    //No need to create a new volume variable for this.. we can reuse the old as we will just assign it with a new value

    printf("Volume of Cylinder: %.2f\n", volume);
    //All answers are correct to 2 decimal places but it is not necessary unless told

    return 0;
}
