#include<stdio.h>
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j>=i; j--)
        {
            printf("%d %d ",i,j);
        }
        printf("\n");
    }
    return 0;
}