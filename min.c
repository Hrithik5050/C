#include<stdio.h>
int main(){
    int max,min,num,sum;
    printf("Enter the number\n");
    scanf("%d",&num);
    min=num;
    max=num;
    sum=num;
    for (int i = 0 ; i <=4; i++)
    {
        scanf("%d",&num);
         sum=sum+num;
         if (max<num)
         {
            max=num;
         }
         if(min>num){
            min=num;
         }
         
    }
    printf("The sum is %d\n%d\n%d\n",sum,max,min);
    return 0;
}