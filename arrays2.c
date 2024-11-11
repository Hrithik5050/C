#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d is ", i);
        scanf("%d", &marks[i]);
    }
    int item, loc, res;
    printf("Enter the value of item:");
    scanf("%d", &item);
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] == item)
        {
            // printf("Valid");
            loc = i;
            res = marks[i];
            printf("Memory location is %d and value is %d ", loc, res);
                }
        // else
        // {
            // printf("invalid");
            // break;
        // }
    }

    return 0;
}