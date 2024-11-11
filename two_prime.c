#include <stdio.h>
int main()
{
    int i, a, b, c, count, count_2, n, p;
    i = 1;
    p = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // printf("Loop entered");

        count = 1;
        if (n % i == 0)
        {
            count++;
        }
    }
    a = count;
    if (a == 2)
            // n = n - 1;
    {
        printf("First number:%d\n", n);
    }
    b = n;
    count_2 = 1;

    for (p = 1; b % p == 0; p++)
    {
        count_2++;

        c = count_2;
        if (c == 2)
        {
            printf("Second number:%d\n", c);
        }
    }
    if (c - n == 2)
    {
        printf("Two numbers are:(%d,%d)", n, c);
    }

    return 0;
}
