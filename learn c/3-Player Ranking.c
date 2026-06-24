#include <stdio.h>

void main()
{
    int p1,p2,p3;
    scanf("%d %d %d", &p1,&p2,&p3);
    if(p1 >= p2 && p1 >= p3 )  //P1
    {
        printf("Player 1 WIN\n");
        if(p2>=p3)
        {
            printf("%d %d %d",p1,p2,p3);
        }
        else
        {
            printf("%d %d %d",p1,p3,p2);
        }
    }
    else if(p2 >= p3 && p2 >= p1 )   // 2 3 1/
    {
        if(p1 >= p3)
        {
            printf("Player 2 WIN\n%d %d %d",p2,p1,p3);
        }
        else
        {
            printf("Player 2 WIN\n%d %d %d",p2,p3,p1);
        }
    }
    else if(p3 >= p1 && p3 >= p2)   // 2 1 3/
    {
        if(p1 >= p2)
        {

            printf("Player 3 WIN\n%d %d %d",p3,p1,p2);
        }
        else
        {
            printf("Player 3 WIN\n%d %d %d",p3,p2,p1);
        }
    }


    /*else if(p3 > p2 && p2 > p1 && p3 > p1)   // 3 2 1/
    {
        printf("Player 3 WIN\n %d %d %d",p3,p2,p1);
    }
    else if(p3 > p1 && p1 > p2 && p3 > p2)   // 3 1 2/
    {
        printf("Player 3 WIN\n %d %d %d",p3,p1,p2);
    }
    else if(p1 > p3 && p3 > p2 && p1 > p2)   // 1 3 2/
    {
        printf("Player 1 WIN\n %d %d %d",p1,p3,p2);
    }
    else if(p1 == p2 && p1 == p3)   // 123
    {
        printf("Player 1 WIN\n %d %d %d",p1,p2,p3);
    }
    else if(p2 == p3 && p1 != p3)   // 231
    {
        printf("Player 1 WIN\n %d %d %d",p2,p3,p1);
    }
    else if(p1 == p3 && p1 != p2)   // 132
    {
        printf("Player 1 WIN\n %d %d %d",p1,p3,p2);
    */
}
