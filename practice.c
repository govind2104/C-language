#include <stdio.h>

/* Function declarations */
void deposit(float *balance);
void withdraw(float *balance);
void checkBalance(float balance);

int main()
{
    int choice;
    float balance = 0.0;   // Initial balance

    printf("=====================================\n");
    printf("     WELCOME TO SIMPLE BANKING SYSTEM\n");
    printf("=====================================\n");

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                deposit(&balance);
                break;

            case 2:
                withdraw(&balance);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                printf("\nThank you for using our banking system.\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

/* Function to deposit money */
void deposit(float *balance)
{
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        *balance += amount;
        printf("Amount deposited successfully.\n");
    }
    else
    {
        printf("Invalid deposit amount.\n");
    }
}

/* Function to withdraw money */
void withdraw(float *balance)
{
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= *balance)
    {
        *balance -= amount;
        printf("Amount withdrawn successfully.\n");
    }
    else
    {
        printf("Insufficient balance or invalid amount.\n");
    }
}

/* Function to check balance */
void checkBalance(float balance)
{
    printf("\nYour current balance is: ₹%.2f\n", balance);
}

 
 
