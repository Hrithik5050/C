#include<stdio.h>
int main()
/*
if else function .....
if elseif else function...
*/

{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("You can vote");
    }
    else if(age>=10){
        printf("You can vote for kids");
    }
        else{
            printf("You cannot vote");
        }   
        return 0;
    
}