#include <stdio.h>
int main(){
    int n,i=0;
    while(1){
        scanf("%d", &n);
        if(n==0){
            printf("%d", i);
            break;
        }else{i++;}
    }
    return 0;
}
