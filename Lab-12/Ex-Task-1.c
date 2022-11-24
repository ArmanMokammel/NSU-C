#include <stdio.h>
#define PI 3.14159 // Defining PI

// If we want to define our functions below the main function, we will have to write the function heading above the main function
// Make sure to add semicolon for this part
float Diameter(float r);
float Area(float r);
float Circumference(float r);

// Our main function
int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calling the functions directly inside print statement
    printf("Diameter = %.2f\n", Diameter(radius));
    printf("Area = %.2f\n", Area(radius));
    printf("Circumference = %.2f", Circumference(radius));

    return 0;
}

// Defining the function for calculating diameter
// This function is expected to return a float
float Diameter(float r)
{
    // Get the value and return it to the caller of this function
    return 2*r;
}

// Defining the function for calculating area
// This function is expected to return a float
float Area(float r)
{
    // Get the value and return it to the caller of this function
    return PI*r*r;
}

// Defining the function for calculating circumference
// This function is expected to return a float
float Circumference(float r)
{
    // Get the value and return it to the caller of this function
    return 2*PI*r;
}
