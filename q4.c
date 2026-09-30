#include <stdio.h>

int main(void)
{
    int card;
    int pin;
    int balance;
    int withdraw;
    int n2000 = 0;
    int n500 = 0;
    int n100 = 0;

    printf("Input card status (1 = valid, 0 = blocked): ");
    scanf("%d", &card);

    printf("PIN correctness (1 = correct, 0 = wrong): ");
    scanf("%d", &pin);

    printf("Account balance: ");
    scanf("%d", &balance);

    printf("Withdrawal amount: ");
    scanf("%d", &withdraw);

    if (card == 0)
    {
        printf("Card blocked. Contact bank.\n");
    }
    else if (pin == 0)
    {
        printf("Incorrect PIN.\n");
    }
    else if (withdraw <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (withdraw > balance)
    {
        printf("Insufficient balance.\n");
    }
    else if (withdraw > 25000)
    {
        printf("Daily limit exceeded.\n");
    }
    else if ((balance - withdraw) < 1000)
    {
        printf("Minimum balance must be maintained.\n");
    }
    else
    {
        int c_withdraw = withdraw;

        balance = balance - withdraw;
        
        while (c_withdraw >= 2000)
        {
            n2000++;
            c_withdraw = c_withdraw - 2000;
        }

        while (c_withdraw >= 500)
        {
            n500++;
            c_withdraw = c_withdraw - 500;
        }

        while (c_withdraw >= 100)
        {
            n100++;
            c_withdraw = c_withdraw - 100;
        }
        
        printf("New balance: %d\n", balance);

        printf("Number of 2000 notes: %d\n", n2000);
        printf("Number of 500 notes: %d\n", n500);
        printf("Number of 100 notes: %d\n", n100);
        
        printf("Please collect your cash.\n");
    }
    
    return 0;
    
}