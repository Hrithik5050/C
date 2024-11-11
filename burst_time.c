#include<stdio.h>
#include<conio.h>
void sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
}
int main()
{
    int n;
    
    printf("enter the number of processes");
    scanf("%d",n);
    int arr[n];
    int burst[n];
    printf(" arrival time is 0 /n");
    for(int i=0;i<n;i++)
    {
        
        printf("enter the burst time : ");
        scanf("%d",burst[i]);
    }

    sort(burst,n);
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans+=burst[i];

    }
    printf(ans);
}