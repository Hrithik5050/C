#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the value:");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        char a=(char)65;
        for (j = 1; j <=i; j++)
        {
             if (i%2==0){
                //  a=65;
                printf("%c ",a);
             }
             else
             {
                printf("%d ",j);
             }
        a++;
        }
        printf("\n");
    }
   return 0; 
}
             