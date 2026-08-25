#include <stdio.h>
int main(){
    int x,n;
    int count = 0;       // นับจำนวน x
    int streak = 0;
    int best_streak = 0;
    scanf("%d", &x);
    while(1){
        scanf("%d", &n);
        if(n==0){break;}
        if (n == x) {
            count++;
            streak++;
            if (streak > best_streak) {
                best_streak = streak;
            }
        }else{
            streak = 0;
        }
    }
    printf("%d\n%d", best_streak,count);
}
