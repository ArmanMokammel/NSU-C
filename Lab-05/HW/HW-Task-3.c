#include <stdio.h>

int main()
{
    int semester_no;

    printf("Enter the semester number: ");
    scanf("%d", &semester_no);

    switch(semester_no)
    {
        case 0:
            printf("Invalid Semester");
            break;
        case 1 ... 3: //We can use "..." for range of values
            printf("Freshman");
            break;
        case 4 ... 6:
            printf("Sophomore");
            break;
        case 7: case 8: case 9: //Or we can mention all of them like this
            printf("Junior");
            break;
        case 10: case 11: case 12:
            printf("Senior");
            break;
        default:
            printf("You must graduate soon");
            break;
    }

    return 0;
}
