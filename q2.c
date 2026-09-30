#include <stdio.h>

int main(void)
{
    int marks;
    int attendance;
    int income;

    printf("input marks (0 - 100): ");
    scanf("%d", &marks);

    printf("input attendance percentage (0 - 100): ");
    scanf("%d", &attendance);

    printf("input family income: ");
    scanf("%d", &income);

    if (marks < 50)
    {
        printf("Not eligible: marks too low\n");
        return 1;
    }
    else if (attendance < 75)
    {
        printf("Not eligible: attendance too low\n");
        return 2;
    }
    else if (income > 800000)
    {
        printf("Not eligible: income too high\n");
        return 3;
    }
    else
    {
        if (marks >= 90 && attendance >= 90)
        {
            printf("Full scholarship\n");
        }
        else if (marks >= 75 && attendance >= 85)
        {
            printf("Half scholarship\n");
        }
        else
        {
            printf("Quarter scholarship\n");
        }
    }
    return 0;
}