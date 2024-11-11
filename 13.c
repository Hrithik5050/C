#include<stdio.h>
int main()
{
    int index=0;
    printf("Enter a number\n");
    scanf("%d",&index);
    while(index<=1000){
        printf("%d\n",index);
        index=index+1;
    }
    return 0;
}