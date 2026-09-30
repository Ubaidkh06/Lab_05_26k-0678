#include <stdio.h>

int main(void)
{
    int permissions;

    printf("Enter permissions value: ");
    scanf("%d", &permissions);

    if ((permissions & 4) == 4)
    {
        printf("Access granted: full control\n"); // 4 indicates execute permission
    }
    else
    {
        if ((permissions & (1 | 2)) == (1 | 2))
        {
            printf("Access granted: read and write\n");
        }
        else
        {
            if ((permissions & 1) == 1)
            {
                printf("Access granted: read-only\n");
            }
            else
            {
                printf("Access denied\n");
            }
        } 
    
    } 
    return 0;
}