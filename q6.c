#include <stdio.h>

int main(void)
{
    int category;
    int s_category;
    int delay;
    

    printf("choose a category (1 = Greeting, 2 = Query, 3 = Complaint, 4 = Feedback): ");
    scanf("%d", &category);

    if (category == 1)
    {
        printf("choose a sub category (1 = Morning, 2 = Evening): ");
        scanf("%d", &s_category);
        
        if (s_category == 1)
        {
            printf("Good morning\n");
        }
        else if (s_category == 2)
        {
            printf("Good evening\n");
        } 
        else
        {
            printf("Invalid selection of sub category\n");
        }
    }
    else if (category == 2)
    {
        printf("choose a sub category (1 = Product, 2 = Billing, 3 = Technical): ");
        scanf("%d", &s_category);

        if (s_category == 1)
        {
            printf("Forwarding to Product support\n");
        }
        else if (s_category == 2)
        {
            printf("Forwarding to Billing support\n");
        } 
        else if (s_category == 3)
        {
            printf("Forwarding to technical support\n");
        }
        else
        {
            printf("Invalid selection of sub category\n");
        }
    }
    else if (category == 3)
    {
        printf("choose a sub category (1 = Delivery, 2 = Quality): ");
        scanf("%d", &s_category);

        if (s_category == 1)
        {
            printf("Was the order delayed? (1 for yes, 2 for no)");
            scanf("%d", &delay);

            if (delay == 1)
            {
                printf("We apologize for the delay.\n");
            }
            else
            {
                printf("We appologise for the issue in delivery\n");
            }
        }
        else if (s_category == 2)
        {
            printf("We are sorry for the poor quality.\n");
        } 
        else
        {
            printf("Invalid selection of sub category\n");
        }
    }
    else if (category == 4)
    {
        printf("choose a sub category (1 = Positive, 2 = Negative): ");
        scanf("%d", &s_category);

        if (s_category == 1)
        {
            printf("Thank you for your positive feedback!\n");
        }
        else if (s_category == 2)
        {
            printf("Thank you for your feedback. We will work to improve our service.\n");
        }
        else
        {
            printf("Invalid selection of sub category\n");
        }
    }
    else
    {
        printf("Invalid selection of category\n");
    }
    
    return 0;
    
}
