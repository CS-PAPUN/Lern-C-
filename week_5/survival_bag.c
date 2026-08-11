#include <stdio.h>
int main(){
    int x,y,z;
    int rx,ry,rz;
    scanf("%d %d %d", &x,&y,&z);
    if(x<=y && x<=z){
        rx=x;
        ry=y;
        rz=z;
        printf("%d %d %d %d", x/3,rx-(3*3),ry-(4*3),rz-(3*2));
    }else if(y<=x && y<=z){
        rx=x;
        ry=y;
        rz=z;
        printf("%d %d %d %d", y/4,rx-(3*4),ry-(4*4),rz-(2*4));
    }else if(z<=x && z<=y){
        rx=x;
        ry=y;
        rz=z;
        printf("%d %d %d %d", z/2,rx-(3*2),ry-(4*2),rz-(2*2));
    }
}
