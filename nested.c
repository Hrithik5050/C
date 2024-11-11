#include <stdio.h>
int main()
{
    int a, b, c;
    printf("The value of a,b,c are\n");
    scanf("%d\n%d\n%d\n", &a, &b, &c);
    printf("values taken");
    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater");
        }
        //else{
          //  printf("a is not greater");
        //}
    }
    printf(" loop exited");
    /*velse if (b > c)
    {
        if (b > a)
            {
                printf("b is greater");
            }
    }
    else
        {
            printf("c is greater");
        }
        */
    return 1;
}
