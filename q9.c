#include <stdio.h>

int main(void)
{
    int permissions;

    printf("Input permissions value: ");
    scanf("%d", &permissions);

    if ((permissions & 16) == 16)
    {
        printf("Full access: admin\n");
    }
    else if ((permissions & (8 | 2)) == (8 | 2))
    {
        printf("Access: delete and write\n");
    }
    else if ((permissions & 4) == 4 && (permissions & 2) != 2)
    {
        printf("Access: execute only\n");
    }
    else if ((permissions & 1) == 1 && (permissions & 2) != 2 && (permissions & 4) != 4)
    {
        printf("Access: read-only\n");
    }
    else if ((permissions & 1) != 1 && (permissions & 2) != 2 && (permissions & 4) != 4 && (permissions & 8) != 8  && (permissions & 16) != 16) 
    {
        printf("Access denied\n");
    }
    else
    {
        printf("Access: custom permissions\n");
    }
    
    printf("bits detected: ");
    
    int found = 0;

    if ((permissions & 1) == 1)
    {
        printf("READ ");
        found = 1;
    }
    if ((permissions & 2) == 2)
    {
        printf("WRITE ");
        found = 1;
    }
    if ((permissions & 4) == 4)
    {
        printf("EXECUTE ");
        found = 1;
    }
    if ((permissions & 8) == 8)
    {
        printf("DELETE ");
        found = 1;
    }
    if ((permissions & 16) == 16)
    {
        printf("ADMIN ");
        found = 1;
    }

    if (!found)
    {
        printf("None");
    }
    printf("\n");
    
    
}