#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    if(n==0){
        printf("Invalid input");
    }else{
        while (i<=n)
        {
            printf("%d\n", i);
            i++;
        }
        
    }
    return 0;
}