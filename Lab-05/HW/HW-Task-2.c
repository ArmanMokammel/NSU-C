#include <stdio.h>

int main()
{
    int semester_no;

    printf("Enter the semester number: ");
    scanf("%d", &semester_no);

    if(semester_no == 0 || semester_no < 0)
    {
        printf("Invalid Semester");
    }
    else if(semester_no >= 1 && semester_no <= 3)
    {
        printf("Freshman");
    }
    else if(semester_no >= 4 && semester_no <= 6)
    {
        printf("Sophomore");
    }
    else if(semester_no >= 7 && semester_no <= 9)
    {
        printf("Junior");
    }
    else if(semester_no >= 10 && semester_no <= 12)
    {
        printf("Senior");
    }
    else
    {
        printf("You must graduate soon");
    }

    return 0;
}
