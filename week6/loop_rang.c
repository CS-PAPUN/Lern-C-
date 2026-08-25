#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    int i=x;
    if(x<=y){
        while(i<=y){
            printf("%d ", i);
            i++;
        }
    }else{
        printf("Invalid input");
    }
    return 0;
}