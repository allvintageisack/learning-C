#include <stdio.h>

int main() {
    // Fixed 4-digit PIN and initial balance
    int pin = 2410, enteredPin, attempts = 0;
    float balance = 100000.0, amount;
    int option;

    // Account Login
    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Try again.\n");
        }

        if (attempts == 3) {
            printf("Too many incorrect attempts. Exiting...\n");
            return 0;
        }
    }

    // Main Menu
    do {
        printf("\nATM Main Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Current Balance: Kes %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Kes %.2f deposited. New Balance: Kes %.2f\n", amount, balance);
                } else {
                    printf("Invalid amount. Deposit failed.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Kes %.2f withdrawn. New Balance: Kes %.2f\n", amount, balance);
                } else if (amount > balance) {
                    printf("Insufficient balance. Withdrawal failed.\n");
                } else {
                    printf("Invalid amount. Withdrawal failed.\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (option != 4);

    return 0;
}
