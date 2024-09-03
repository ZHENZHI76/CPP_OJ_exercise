#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int judge()
{
    int x=rand()+1;
    if(x<0)x=0;
    x+=2147483647;
    return x>0;
}

int main()
{
    srand(time(0));
    printf("%d\n",judge());
}