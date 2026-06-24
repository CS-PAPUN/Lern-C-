#include <stdio.h>

void main(){
    int tt,a,b,re;

    scanf("%d %d %d", &tt,&a,&b);
    if(a == 1){
        if(b>tt){
        printf("Sorry, you can not withdraw money.");
        }else{
        printf("%d", tt-b);
        }
    }else if(a == 2){
        printf("%d", tt+b);
    }
}
