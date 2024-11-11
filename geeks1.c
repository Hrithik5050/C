#include <stdio.h>
int foo(int a, int b)
{
    int sum = a + b;
    b = a;
    int c= sum - b;
    printf("%d\n",c);
    return c;
}
int main()
{
    int i = 1, j = 1, k = 2, l=0;
    l = ++i && foo(j, k);
    printf("%d %d %d %d", i, j, k, l);
    return 0;
}