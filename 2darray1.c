#include <stdio.h>
int main(){
    int m1,n1,m2,n2,m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the values\n");
    printf("Give the starting and ending value (m1,n1) and (m2,n2)");
    scanf("%d%d%d%d",&m1,&n1,&m2,&n2);

    for (int i = 0; i <m ; i++)
    {
       for (int j = 0; j < n; j++)
       {
        printf("Row is %d and column is %d an value is=",i,j);
        scanf("%d",&arr[i][j]);
       }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    //printing of your choice of array...
    // for (int i = m1; i <= m2; i++)          
    // {
    //     for (int j = n1; j <= n2; j++)
    //     {
    //           printf("%d",arr[i][j]); 
    //     }
    //     printf("\n");
    // }
    

    return 0;
    

    
}