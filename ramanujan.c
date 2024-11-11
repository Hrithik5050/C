#include <stdio.h>
int main()
{
    int i, a, b, count, c;
    count = 0;
    for (i = 1; i <= 2000; i++)
    {
        for (a = 1; a * a * a < i; a++)
        {
            for (b = 1; b * b * b < i; b++)
            {
                // if (a != b)
                // {
                    if (i == a * a * a + b * b * b)
                    {
                        printf("%d\n", i);
                        // count++;
                    // }
                    // break;
                }
                break;
            }
            // break;
        }
        // break;
    }

    // if (count == 2)
    // {
    // }
    return 0;
}