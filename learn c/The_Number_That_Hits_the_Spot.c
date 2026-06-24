#include <stdio.h>

void main(){
    int a,n=15,cnt=0,sum=0;
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        if(a<=0 || a>100){
            sum += 0;
        }else if(a>0 && a<=100){
            sum += a;
        }
    }

    if(sum>=400 && sum<=600){
        for(;;){
            scanf("%d", &a);
            if(a<=0 || a>100){
                sum += 0;
                cnt++;
            }
            if(a>0 && a<=100){
                sum += a;
                cnt++;
            }
            if(sum>600){
                break;
            }
        }
    }
    printf("%d\n%d", sum,cnt);
}
