#include <stdio.h>
int main()
{
    int n, a, prime,c;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        prime = 0;
        if (n % i == 0)
        {
            prime++;
        }
    }
    c=prime;
    if (c==2)
        printf("Prime number");
    else
        printf("Not prime");
    return 0;
}