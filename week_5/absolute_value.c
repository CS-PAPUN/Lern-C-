#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x>0){
        printf("%d", x);
    }else if(x<0){
        printf("%d", -1*x);
    }else{printf("%d", x);}
}
