#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    float fact;
    float sum = 0.0;
    for (i = 1; i <= 7; i++)
    {
        fact = 1.0;
        for (j = 1; j <= i; j++)
            fact = fact * j;
        sum = sum + i / fact;
        printf("%f\n%f\n", sum, fact);
    }
    return 0;
}