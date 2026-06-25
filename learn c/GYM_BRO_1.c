#include <stdio.h>

void main()
{
    int s=1,m=2,t=3,w=4,th=5,f=6,st=7,n;
    scanf("%d", &n);
    if(n == s)
    {
        printf("Gym Closed");
    }
    else if(n == m || n == th)
    {
        printf("Pull Day");
    }
    else if(n == t || n == f)
    {
        printf("Push Day");
    }
    else if(n == w)
    {
        printf("Leg Day\nI can't do this anymore!");
    }
    else if(n == st)
    {
        printf("Cheat Day\nNYAM NYAM");
    }
    else
    {
        printf("Invalid Value");
    }
}
