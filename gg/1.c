#include <stdio.h>

void main(){
    int k,r=0,x;
    scanf("%d", &k);
    for(int i=0;i<100;i++){
        scanf("%d", &x);
        if(x%k==0){
            r++;
        }
    }
    printf("%d", r);
}
