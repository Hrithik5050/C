#include <stdio.h>

int main()
{
    int i, n, prime, c;
    for (int n = 1; n <= 300; n++)
    {

        prime = 0;
        for (i = 1; i <= n; i++)
        {
            {
                if (n % i == 0)
                    prime++;
            }
        }
        c = prime;
        if (c == 2)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}