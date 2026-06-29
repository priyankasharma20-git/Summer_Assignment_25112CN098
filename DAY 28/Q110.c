#include <stdio.h>
int main() {
    float balance = 5000, amount;
    int choice;
    printf("1. Deposit\n2. Withdraw\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Enter Amount: ");
        scanf("%f", &amount);
        balance += amount;
    }
    else if(choice == 2) {
        printf("Enter Amount: ");
        scanf("%f", &amount);

        if(amount <= balance)
            balance -= amount;
        else
            printf("Insufficient Balance\n");
    }
    printf("Current Balance = %.2f\n", balance);
    return 0;
}