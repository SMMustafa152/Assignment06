#include <stdio.h>
int main(){
    int accounttype,transaction;
    float balance=5000.00,amount;
    printf("---Welcome to the ATM---");
    printf("\nenter the account type:\n1.saving\n2.current");
    printf("\nenter your choice:");
    scanf("%d",&accounttype);

    switch(accounttype){
        case 1:
        printf("you slected saving account");
        printf("\nchoose your transaction:");
        printf("\n1.deposite\n2.withdraw\n3.check balance");
        scanf("%d",&transaction);
        switch(transaction){
            case 1:
            printf("you selected deposit option");
            printf("\nenter your amount to deposite:");
            scanf(" %f",&amount);
            balance+=amount;
            printf("\nnow your account balance is:%.2f",balance);
            break;
            case 2:
            printf("you selected withdraw option");
            printf("\nenter your amount to withdraw:");
            scanf(" %f",&amount);
            if(amount<balance){
                balance-=amount;
                printf("\nyour balance after withdrawl:%.2f",balance);
            }else{
                printf("\nInsufficient balance");
            }
            break;
            case 3:
            printf("you selected to check balance");
            printf("\nYour account balance is:%.2f",balance);
            break;
            default:
            printf("\ninvalid option");
            break;
        }
        break;
        case 2:
        printf("you slected current account");
        printf("\nchoose your transaction:");
        printf("\n1.deposite\n2.withdraw\n3.check balance");
        scanf(" %d",&transaction);
        switch(transaction){
            case 1:
            printf("\nyou selected deposit option");
            printf("\nenter your amount to deposite:");
            scanf(" %f",&amount);
            balance+=amount;
            printf("\nnow your account balance is:%.2f",balance);
            break;
            case 2:
            printf("\nyou selected withdraw option");
            printf("\nenter your amount to withdraw:");
            scanf(" %f",&amount);
            if(amount<balance){
                balance-=amount;
                printf("\nyour balance after withdrawl:%.2f",balance);
            }else{
                printf("\nInsufficient balance");
            }
            break;
            case 3:
            printf("\nyou selected to check balance");
            break;
            default:
            printf("\ninvalid option");
            break;

    }
    break;
    default:
    printf("\nInvalid account selection");
    break;

}
return 0;
}