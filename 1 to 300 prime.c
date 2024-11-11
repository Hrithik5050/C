#include <stdio.h>

int main()
{
    int i, n, prime = 1;
    for (int n = 1; n <= 300; n++)
    {

        for (i = 1; i < n; i++)
        {
            prime=0;
            if (n % i == 0)
                prime++;
        }
        if (prime <= 2)
            printf("%d", n);
    }
    return 0;
}
