#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum of number is:%d",sum);
    return 0;
    
}