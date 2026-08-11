#include <stdio.h>
int main(){
    int k,k1,k2,s1,s2,g;
    scanf("%d %d %d %d %d %d", &k,&k1,&k2,&s1,&s2,&g);
    if(s1>=s2){
        if(s1==s2 && s1==8){
            printf("0");
            return 0;
        }
        if(k1<k2 && k1<k){
            printf("1");
        }else if(k2<k1 && k2<k){
            printf("2");
        }else{printf("");}
    }else if(s1<=s2){
        if(s1==s2 && s1==8){
            printf("0");
            return 0;
        }
        if(k1<k2 && k1<k){
            printf("1");
        }else if(k2<k1 && k2<k){
            printf("2");
        }else{printf("0");}
    }
}
