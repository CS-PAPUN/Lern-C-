#include <stdio.h>

void main(){
    int i=0,Od=0,E=0,N;
    while(i==0){
        scanf("%d", &N);
        if(N==0){
            break;
        }
        if(N%2==0){
            E+=N;
        }else{Od+=N;}
    }
    printf("%d\n%d\n", E,Od);
    if(Od<E){
        printf("Even");
    }else if(E<Od){
        printf("Odd");
    }else{printf("Equal");}
}
