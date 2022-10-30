#include <stdio.h>

int main()
{
    int x,y;
    int units;
    char direction;

    printf("Enter current coordinate (x and y positions): ");
    scanf("%d %d",&x,&y);

    printf("Enter No. units towards direction: ");
    scanf("%d",&units);

    printf("Enter Direction: ");
    scanf(" %c",&direction);

    switch(direction)
    {
        case 'N':
            y = y + units;
            break;
        case 'S':
            y = y - units;
            break;
        case 'E':
            x = x + units;
            break;
        case 'W':
            x = x - units;
            break;
        default:
            printf("Invalid direction");
            return 0;
    }

    printf("New coordinate is: (%d,%d)",x,y);

    return 0;
}
