#include <stdio.h>
int fun(int c[10][10], int d, int e);
int main()
{
    int arr[10][10];
    int a, b, res, i, j;
    printf("Enter the rows and columns");
    scanf("%d%d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Row is %d and column is %d=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    res = fun(arr, a, b);
    printf("The value of sum is= %d", res);
}
int fun(int c[10][10], int d, int e)
{
    int i, j;
    int sum = 0;
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < e; j++)
        {
            sum += c[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return sum;
}