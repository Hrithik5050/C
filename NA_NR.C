#include <stdio.h>
void fact();
int main()
{
    fact();
    return 0;
}

void fact()
{
    int a, b, i, n, j;
    a = 1;
    b = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1, j = n; i <= n, j >= 1; i++, j--)
    {
        a = a * i;
        b = b * j;
        printf("%dand%d\n", a, b);
    }
}
