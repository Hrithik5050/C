#include <stdio.h>
int main()
{
    int i, n, prime;
    for (int n = 1; n <= 300; n++)
    {
        prime=1;

        for (i = 1; i < n; i++)
        {
            
            if (n % i == 0)
                prime++;
        }
        if (prime==2)
            printf("%d\n", n);
    }
    return 0;
}