#include <stdio.h>

void main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a >= b){
        printf("%d", a-b);
    }else{
        printf("Unable to withdraw money.");
    }
}
