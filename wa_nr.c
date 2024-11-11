#include <stdio.h>
void table(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    table(n);
    return 0;
}
void table(int x)
{
    int i;
    for (int i = 1; i <= 10; i++)
    {
        i *x;
    printf("%d*%d=%d\n", x, i, i * x);
    }
}