#include <stdio.h>
void fun(int b[3][3]);
int main()
{
    int a[3][3];
    for (int j = 0; j < 3; j++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("row is %d column is %d:", j,c);
            scanf("%d", &a[j][c]);
            /* code */
        }
    }

    fun(a);
    // printf("%d",a);
    return 0;
}
void fun(int b[3][3])
{
    // int b;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", b[i][j]);
            /* code */
        }
            printf("\n");
    }
}