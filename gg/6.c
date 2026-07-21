#include <stdio.h>

void main(){
    int i=0,x,n=0;
    while(i==0){
        scanf("%d", &x);
        if(x!=0){
            n++;
        }else{
            break;
        }
    }
    printf("%d", n);
}
