#include <stdio.h>
int main(){
    int n,i=0,x;
    scanf("%d", &x);
    while(1){
        scanf("%d", &n);
        if(n!=0){
            if(n==x){
                i++;
            }
        }else{break;}
    }
    if(i==0){printf("None");}
    else{printf("%d", i);}
}
