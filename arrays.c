#include<stdio.h>
int main(){
    int marks[4]={7,8,9,5}; //no need of for loop for enter value we can write it over here only..
    int i;
   /* for ( i = 0; i < 4; i++)
    {
        printf("Enter the value of %d is ",i);
        scanf("%d",&marks[i]);
    }*/
    for (  i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n ",i,marks[i]);
    }
    return 0;
    
}