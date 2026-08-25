#include <stdio.h>
int main(){
    int n,x,y=1000000,l,ans,gg;
    scanf("%d", &x);
    for(int i=0;i<8;i++){
        scanf("%d", &n);
        if(x>n){
            gg=n;
            l=x-n;
            if(l<y){
                y=l;
                ans=gg;
            }
        }else{
            gg=n;
            l=n-x;
            if(l<y){
                y=l;
                ans=gg;
            }
        }
    }
    printf("%d", ans);
}
