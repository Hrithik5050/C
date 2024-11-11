#include <stdio.h>
int main()
{
    int marks[5], i, loc, n = 5;
    printf("enter the location you want to delete");
    scanf("%d", &loc);
    for (i = 0; i < 5; i++)
    {
        printf("memory location is %d and marks are\n ", i);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("The loctaion is %d and marks are %d\n", i, marks[i]);
    }
    for (i = loc; i < n; i++)
    {
        marks[i] = marks[i + 1];
    }
    n = n - 1;
    for (i = 0; i < n; i++)
    {
        printf("Memory location is %d and marks are %d\n ", i, marks[i]);
    }
    return 0;
}