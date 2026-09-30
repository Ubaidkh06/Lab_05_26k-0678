#include <stdio.h>

int main(void)
{
    int type;
    int hours;
    int membership;
    float fee;

    printf("input vehical type (1 for bike, 2 for car, 3 for truck): ");
    scanf("%d", &type);

    printf("input hours parked: ");
    scanf("%d", &hours);

    printf("input membership status (1 for member, 0 for non member): ");
    scanf("%d", &membership);

    if (type != 1 && type != 2 && type != 3)
    {
        printf("invalid vehical\n");
        return 1;
    }
    else if (hours <= 0)
    {
        printf("invalid duration\n");
        return 2;
    }
    else if (type == 1)
    {
        fee = 20 * hours;
    }
    else if (type == 2)
    {
        if (hours <= 2)
        {
            fee = 50;
        }
        else
        {
            fee = 50 + (30 * (hours - 2));
        }
    }
    else if (type == 3)
    {
        if (hours <= 3)
        {
            fee = 100;
        }
        else
        {
            fee = 100 + (50 * (hours - 3));
        }
    }

    if (membership == 1 && fee > 200)
    {
        fee = fee * 0.85;
    }

    printf("The final fee is: %.1f\n", fee);

    return 0;
}