#include <stdio.h>
int main(){
    int n,i=0;
    int streak=0;
    int before=0;
    int current=0;
    int best_number=0;
    int best_streak=0;
    while (1){
        if(i==0){
            scanf("%d", &n);
            if(n==0){break;}
            before=n;
            best_number=n;
            streak++;
            best_streak=streak;
            i++;
            continue;
        }
        scanf("%d", &n);
        if(n==0){break;}
        current=n;
        if(current==before){
            streak++;
        }else{
            streak=1;
            before=current;
        }
        if(streak>best_streak){
            best_streak=streak;
            best_number=current;
        }
    }
    printf("%d\n%d", best_streak,best_number);
    return 0;
}