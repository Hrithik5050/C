#include <stdio.h>
int main()
{
    int a, b, hcf;
    printf("Enter the number\n");
    scanf("%d\n%d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("hcf%d\n", hcf);
    return 0;
}