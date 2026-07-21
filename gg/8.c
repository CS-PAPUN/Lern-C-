#include <stdio.h>

void main(){
    int i=0,T=0,F=0,x;
    while(i==0){
        scanf("%d", &x);
        if(x<0){
            break;
        }
        if(x%3==0){
            T++;
        }
        if(x%5==0){
            F++;
        }
    }
    printf("%d\n%d", T,F);
}
