#include <stdio.h>
int main(){
    double x,y,z,sum;
    scanf("%lf %lf %lf", &x,&y,&z);
    if(z!=0){
        sum=(x+y)/z;
        printf("%.6lf", sum);
    }else{
        printf("cannot divide by zero");
    }
}
