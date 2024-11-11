#include <stdio.h>
int main()
{
    int r, c, arr[r][c];
    int i, j, max, num, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num);
    max = num;
    printf("Number of rows and columns are ");
    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Row is %d and column is %d value is ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
            printf("%d", arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < arr[i][j])

            {
                max = arr[i][j];
            }
        }
    }
    printf("Max value is %d", max,sum);

    return 0;
}