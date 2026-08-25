#include <stdio.h>
int main(){
    int n,m,i=0,mx,mn,f=1;
    while(i<8){
        scanf("%d", &n);
        if(n>0){
            if(f==1){
                mx=n;
                mn=n;
                f=0;
            }else{
                if(n>=mx){
                mx=n;
                }
                if(n<=mn){
                mn=n;
                }
            }
        }
        i++;
    }
    printf("%d\n%d", mx,mn);
}