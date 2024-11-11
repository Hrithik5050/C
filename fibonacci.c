#include<stdio.h>
int main(){
    int a,b,n,i,c;
    a=0;
    b=1;
    i=0;
    printf("Enter the nth digit you want to print:");
    scanf("%d",&n);
    while (i<=n)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        i++;
        
    }
    return 0;
    
}