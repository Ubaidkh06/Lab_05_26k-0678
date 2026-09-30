#include <stdio.h>

int main(void)
{
    int stream;
    int interest;
    int medicine;


    printf("What is your stream? (1 = Science, 2 = Commerce, 3 = Arts): ");
    scanf("%d", &stream);

    switch(stream)
    {
        case 1:
        printf("whats your interest? (1 = Biology, 2 = Physics, 3 = Chemistry): ");
        scanf("%d", &interest);
        
        if (interest == 1)
        {
            printf("interested in medicine? (1 for yes, 0 for no): ");
            scanf("%d", &medicine);

            if (medicine == 1)
            {
                printf("Recommended: MBBS\n");
            }
            else if (medicine == 0)
            {
                printf("Recommended: Biotechnology\n");
            }
            else
            {
                printf("invalid choice\n");
            }
        }
        else if (interest == 2)
        {
            printf("Recommended course: Mechanical Engineering\n");
        }
        else if (interest == 3)
        {
            printf("Recommended course: Chemical Engineering\n");
        }
        else
        {
            printf("invalid choice\n");
        }
        break;
        
        case 2:
        printf("whats your interest? (1 = Accounting, 2 = Marketing): ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Recommended course: Finance\n");
        }
        else if (interest == 2)
        {
            printf("Recommended course: Business Administration\n");
        }
        else
        {
            printf("invalid choice\n");
        }

        break;

        case 3:
        printf("whats your interest? (1 = Literature, 2 = History, 3 = Psychology): ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Recommended course: Journalism\n");
        }
        else if (interest == 2)
        {
            printf("Recommended course: Archaeology\n");
        }
        else if (interest == 3)
        {
            printf("Recommended course: Clinical Psychology\n");
        }
        else
        {
            printf("invalid choice\n");
        }

        break;

        default:
        printf("Invalid choice\n");
    }

    return 0;
}