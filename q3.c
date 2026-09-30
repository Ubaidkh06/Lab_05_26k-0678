#include <stdio.h>

int main(void)
{
    int age, oxygen, heart;

    printf("Input age: ");
    scanf("%d", &age);

    printf("Input oxygen level: ");
    scanf("%d", &oxygen);

    printf("Input heart rate: ");
    scanf("%d", &heart);

    if (oxygen < 90)
    {
        printf("Critical: immediate attention\n");
    }
    else if (heart > 130 || heart < 40)
    {
        printf("Critical: cardiac alert\n");
    }
    else if (age >= 65 && oxygen < 95)
    {
        printf("High priority\n");
    }
    else if (age <= 5 && heart > 110)
    {
        printf("High priority\n");
    }
    else if (oxygen < 97)
    {
        printf("Medium priority\n");
    }
    else
    {
        printf("Low priority\n");
    }

    return 0;
}