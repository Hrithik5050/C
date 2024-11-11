#include <stdio.h>
int main()
{
    int marks[10] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int i, n, e;
    printf("Position you want to update and value of element");
    scanf("%d %d ", &n, &e);
    for (i = 9; i >=n-1 ; i--)
    {
        marks[i + 1] = marks[i];
    }

        marks[n-1] = e; 
    for (i = 0; i < 10; i++)
    {
        printf("%d and %d\n",i,marks[i]);
        /* code */
    }

    return 0;
}