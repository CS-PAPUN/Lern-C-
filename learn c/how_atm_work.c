#include <stdio.h>

int main(){
    float Balance = 9872.50;
    int Pass = 785241,a,Z,D;
    char n;

    for(int i=0;i<3;i++){
        scanf("%d", &a);
        if(a != Pass){
            if(i==0){
                printf("Incorrect PIN. You have 2 attempts left.\n");
            }
            else if(i==1){
                printf("Incorrect PIN. You have 1 attempt left.\n");
            }
            else{
                printf("Incorrect PIN. Your debit card is currently unavailable.\nThe transaction has been cancelled.");
                return 0;
            }
        }
        else{
            break;
        }
    }

    printf("============ MENU ============\n");
    printf("     [A] Withdrawal menu\n");
    printf("     [B] Deposit menu\n");
    printf("==============================\n");

    scanf(" %c", &n);
    if(n=='A'){
        printf("[ Withdrawal menu ]\n");
        scanf("%d", &Z);
        if(Z>Balance){
            printf("Not enough money!\nThe transaction has been cancelled.");
        }else{
            if(Z%500==0 || Z%1000==0 || Z%100==0){
                Balance-=Z;
                printf("Withdrawal successful.");
                printf("\nBalance : %.2f Baht", Balance);
            }else{
                printf("The amount is incorrect.\nThe transaction has been cancelled.");
                return 0;
            }
        }
    }else if(n=='B'){
        printf("[ Deposit menu ]\n");
        scanf("%d", &D);
        if(D>100000){
            printf("Deposit limit exceeded!!\nThe transaction has been cancelled.");
        }else if(D%500!=0 || D%1000!=0 || D%100!=0){
            printf("The amount is incorrect.\nThe transaction has been cancelled.");
        }else{
            Balance+=D;
            printf("Deposit successful.");
            printf("\nBalance : %.2f Baht", Balance);
        }
    }else{
        printf("We don't have this menu.");
    }
    return 0;
}
