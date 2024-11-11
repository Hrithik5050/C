#include <stdio.h>
int main()
{
    int a = 3, b = 4, c;
    c = b - a;
    switch (c)
    {
    case 1 && 2:
        printf("Hello");
        break;
        /* case a || b:
             printf("Hi");
     */
        // default:
        // break;
    }
    return 0;
}