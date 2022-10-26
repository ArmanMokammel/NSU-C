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

    if(direction == 'N')
    {
        y = y + units;
    }
    else if(direction == 'S')
    {
        y = y - units;
    }
    else if(direction == 'E')
    {
        x = x + units;
    }
    else if(direction == 'W')
    {
        x = x - units;
    }
    else
    {
        printf("Invalid direction");
        return 0;
    }

    printf("New coordinate is: (%d,%d)",x,y);

    return 0;
}
