#include <stdio.h>
int main(){
    int n = 1, i = 1;
    int fact = 1;
    int sum = 1;
    for (n = 1; n <= 10; n++)
    {
        fact = 1;
        for (i = 1; i <= n; i++)
        {
            fact *= i;
            sum = fact * (sum+i);
        }
        printf("%d\n%d\n",sum, fact);
    }
        return 0;
    }
    // #include <stdio.h>

    // // Function to calculate the factorial of a number
    // unsigned long long factorial(int num)
    // {
    //     unsigned long long fact = 1;
    //     for (int i = 1; i <= num; i++)
    //     {
    //         fact *= i;
    //     }
    //     return fact;
    // }

    // int main()
    // {
    //     unsigned long long sum = 0;

    //     for (int i = 1; i <= 9; i++)
    //     {
    //         sum += factorial(i) * factorial(i + 1);
    //         printf("The sum of the series is: %llu\n", sum);
    //     }

    // }
    // return 0;
    // }