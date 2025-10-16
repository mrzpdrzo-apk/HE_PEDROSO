#include <stdio.h>

int main()
{

    int choice;
    float moneydeposit = 500;
    float amountmoney;
    float deposit;

    do
    {
        printf("PEDROSO Bank\n\n");
        printf("Please Select your Transaction\n\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Your current balance: P%.2f\n", moneydeposit);
            break;

        case 2:
            do
            {
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);

                if (deposit >= 100)
                {
                    moneydeposit += deposit;
                    printf("P%.2f deposited successfully\n", deposit);
                }
                else
                {
                    printf("Invalid deposit! Minimum is P100.00.\n");
                }

            } while (deposit < 100);
            break;

        case 3:
            while (1)
            {
                printf("Enter amount to withdraw: ");
                scanf("%f", &amountmoney);

                if (amountmoney >= 100 && amountmoney <= moneydeposit)
                {
                    moneydeposit -= amountmoney;
                    printf("You withdrew P%.2f successfully!\n", amountmoney);
                    break;
                }
                else
                {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
                }
            }
            break;
        case 4:

            printf("Thank you for using PEDROSO Bank. Thank you and come again!");
            break;

        default:
            printf("Invalid option. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}