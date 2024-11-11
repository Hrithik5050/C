#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int x;
    printf("The number greater than x=");
    scanf("%d", &x);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > x)
        {

            printf("%d ", arr[i]);
            printf("\n");
        }
    }

    return 0;
}