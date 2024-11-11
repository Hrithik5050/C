#include<stdio.h>
int main(){
    int arr[5];
    // int rev[5];
    int i=0;
    printf("Please enter the five element of array \n");
    for (i = 0; i < 5 ;  i++ )
    {
        //printf("Enter the value of %d location is=",i);
        scanf("%d",&arr[i]);
    }
    printf("Entered array is : \n");
    for (int i = 0; i<5;i++)
    {
        printf("%d \n ",arr[i]);
    }
    printf("reversed array is : \n");
    int temp;
    for (int i=0;i<5;i++)
    {
        temp = arr[i];
        arr[i] = arr[5-i];
        arr[5-i] = temp;
    }
    for (int i = 4; i>=0;i--)
    {
        printf("%d \n ",arr[i]);
    }


    
     
    
     
   
    return 0;
    
}