#include <stdio.h>

void main(){
    int d,g;
    scanf("%d %d", &d,&g);

    if(d==1){
        if(g<7){
            printf("11000");
        }else if(g>=7 && g<=11){
            printf("18000");
        }else if(g>=12 && g<= 22){
            printf("30000");
        }else if (g>22){
            printf("%d", 30000+((g-22)*1500));
        }
    }else if(d==2){
        printf("%d", g*1500);
    }
}
