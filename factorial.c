#include <stdio.h>
int main()
{
    int n;
    int a = 1;
    printf("Enter your number:");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        a=n* i;
        printf("%d*%d=%d\n",n,i,a);
    }
    return 0;
}
