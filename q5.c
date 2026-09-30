#include <stdio.h>

int main(void)
{
    int time;
    int motion;
    int light;
    int room;
    int cooking = 0;

    printf("input time (0-23): ");
    scanf("%d", &time);

    printf("motion detected? (1 or 0): ");
    scanf("%d", &motion);

    printf("input light level (0-100): ");
    scanf("%d", &light);

    printf("pick a room (1 = Living Room, 2 = Bedroom, 3 = Kitchen): ");
    scanf("%d", &room);

    if (room == 3)
    {
        printf("Cooking? (1 or 0): ");
        scanf("%d", &cooking);
    }

    if (motion == 1)
    {
        if (time >= 6 && time < 18)
        {
            printf("Day mode: lights ON\n");
        }
        else if (time >= 18 && time < 23)
        {
            printf("Evening mode: dim lights\n");
        }
        else if (time == 23 || (time >= 0 && time < 6))
        {
            printf("Night mode: Lights OFF\n");
        }
    }
    else if (motion == 0)
    {
        printf("Away mode: all OFF\n");
    }

    if (cooking == 1) // will not execute when other rooms selected apart from kitchen as it is initialised to 0 
    {
        printf("turn on exhaust fan\n");
    }

return 0;

}