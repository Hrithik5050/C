#include<stdio.h>
void increasing(int x,int n);           //Extra parameter

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
void increasing(int x,int n){
    if (x>n)
    {
        return;
    }
    
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}