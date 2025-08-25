#include  <stdio.h>

void CheckBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
        //Banking Program
    int choice = 0;
    float balance = 0.0f;

    printf("***Welcome Dear Customer To our Bank***\n");

    do{
        printf("\nPick an Option\n");
        printf("\n1. Check Balance\n");
        printf("\n2. Deposit Money\n");
        printf("\n3. Withdraw Money\n");
        printf("\n4. Exit\n");
        printf("\nPick your choice: \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                CheckBalance(balance);
                break;
            case 2:
                balance += deposit(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            default:
                printf("\nInvalid Choice. Kindly pick between 1-4.");
                break;
                

        }

    }while(choice < 1 || choice > 4);
    return 0;
}

void CheckBalance(float balance){
    printf("Your  current balance is: ksh%.2f\n", balance);

}
float deposit(float balance){
    float amount = 0.0f;
    printf("Enter amount: ksh");
    scanf("%f", &amount);
    if(amount < 0){
        printf("Invalid amount. Deposit above 2 ksh\n");

    }else
    printf("Successfully deposited ksh%.2f to your account.\n", amount);
    printf("Thank you for banking with us.\n");
    return amount;

}
float withdraw(float balance){
    float amount = 0.0f;
    printf("\nEnter amount: ksh");
    scanf("%f", &amount);
    if(amount < 0){
        printf("Invalid amount.\n");
        return 0.0f;

    }
    else if(amount > balance){
        printf("Insufficient funds.Try again.\n");
        printf("Your balance is ksh%.2f", balance);
        return 0.0f;

    }else{
        printf("Successfully Withdrawn\n");
        printf("Thank you for banking with us.\n");
    }
    return amount;

}
