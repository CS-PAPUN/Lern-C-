#include <stdio.h>
int main(){
    int n,i=0,e=0,o=0;
    while (i<8)
    {
        scanf("%d", &n);
        if(n%2==0){
            e+=n;
        }else{o+=n;}
        i++;
    }
    //printf("%d %d", e,o);
    if(e==o){
        printf("equal\n%d\n%d", e,o);
    }else if(e>o){
        printf("Even\n%d\n%d", e,o);
    }else{
        printf("Odd\n%d\n%d", e,o);
    }
    return 0;
    
}