#include <stdio.h>
#include <math.h>
int main()
{
    int num, count, x, y, var, sum, initial, z;
    count = 0;
    sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    x = num;
    initial = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    y = count;
    while (initial != 0)
    {
        z = initial % 10;
        var = pow(z, y);
        sum = sum + var;
        initial /= 10;
    }
    if (sum == x)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }
    return 0;
}