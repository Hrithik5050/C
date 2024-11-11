#include<stdio.h>
int main(){
    char n;
    printf("Enter the uppercase ascii value:");   //range from 65 - 90
    scanf("%d",&n);
    for (char i =(char) 65; i <=n; i++)
    {
        for (char j = (char)65; j <=n; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}