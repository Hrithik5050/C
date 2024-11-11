#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    //index 1 to 4
    int i,j,temp;
    for (i = 1,j=4; i <=j; i++ , j--)          //swaping of two numbers
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for ( i = 0; i < 6; i++)
    {
         printf("%d ",arr[i]);
    }
    
    return 0;
    
}