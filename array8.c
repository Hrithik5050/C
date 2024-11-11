#include<stdio.h>
    int main(){
        int r;
        printf("Enter the size of array=");
        scanf("%d",&r);
        int arr[r];
        for (int i = 0; i < r; i++)
        {
            printf("The value of %d location is=",i);
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i < r; i++)
        {
            if (i%2!=0)
            {
                arr[i]*=2;
            }
            else arr[i]+=10;
            
        }
        for (int i = 0; i < r; i++)
        {
            printf("%d",arr[i]);
            printf("\n");
        }
        
        
        

    return 0;
}