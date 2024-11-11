#include <stdio.h>
int fun(int a[3][3]);
int main()
{
    int b[3][3], res;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("row is %d and column is %d:", i, j);
            scanf("%d", b[i][j]);
        }
    }
    res = fun(b);
    printf("Sum is %d", res);

    return 0;
}
int fun(int a[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("%d", sum);
    return sum;
}