#include <stdio.h>
int main()
{
    int n, a, prime, j; int b=2;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (j = 2; j <= n; j++)
    {
        prime = 0;
        
        for (int i = 1; i <= j; i++)
        {

            if (j % i == 0)
            {
                prime++;
            }
        }
        if (prime == 2)
            a = j;
        if((a-b)==2)
            printf("%d , %d\n",b,a);

        b=a;
    }
        return 0;
    }