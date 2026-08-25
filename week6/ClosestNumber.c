#include <stdio.h>
int main(){
    int n,x,ans,min_diff,cx,best_diff;
    scanf("%d", &x);
    for(int i=0;i<8;i++){
        if(i==0){
            scanf("%d", &n);
            best_diff=n;
        }
        scanf("%d", &n);
        cx=x;
        min_diff = cx-n;
        if(min_diff<0){min_diff*=-1;}
        if(min_diff<best_diff){
            best_diff=min_diff;
        }
    }
    printf("%d", best_diff);
}