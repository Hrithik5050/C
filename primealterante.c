#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
int prime=0;
    for ( int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
           prime++;
        }
       
    }
    int count;
    count =prime;
    if (count==2) printf("Prime");
    else printf("Not prime");
    return 0;
}