#include<stdio.h>
int main()
{
    int num,a; int res=1;
    printf("Write a number:");
    scanf("%d",&num);
    res=num>>2;
    // res=num<<2;

    printf("%d",res);
    return 0;
}