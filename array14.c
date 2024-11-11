#include<stdio.h>
int main(){
    int temp,initial,n;
    printf("Size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of arrays");
    for (int i = 0; i <n ; i++)
    {
          scanf("%d",&arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        temp=arr[i];    
        initial=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for (int i = 0; i < n/2; i++)
    {
        if (initial==arr[n-i-1])
        {
            printf("Number is pandarome");
            break;
        }
        else{
            printf("Number is not panadarome");
            break;
        }
    }
    return 0;
}

        
    
    