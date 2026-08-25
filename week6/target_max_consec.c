#include <stdio.h>
int main(){
    int n,i=0,gg,x,y,before,current,streak=0,best_streak;
    scanf("%d", &x);
    scanf("%d", &y);
    before=y;
    if(y==x){
        streak+=1;
    }
    while(1){
        scanf("%d", &n);
        if(n!=0){
            current=n;
            if(current==x){
                i++;
                if(current==before){
                    streak++;
                    before=current;
                }else{
                    before=current;
                    if(streak>0){
                        streak*=0;
                    }
                }
            }
        }else{break;}
        printf("%d <--- ", gg);
        printf("%d -<-<- ", before);
        printf("%d <-<-<\n", current);
    }
    best_streak=gg;
    if(i==0){printf("None");}
    else{printf("%d\n%d", best_streak,i);}
}
