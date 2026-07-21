#include <stdio.h>

void main(){
    int n,t=0,f=0,x;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        if(x%3==0){
            t++;
        }
        if(x%5==0){
            f++;
        }
    }
    printf("%d\n%d", t,f);
}
