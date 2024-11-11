#include <stdio.h>
int factorial(int a);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}
int factorial(int a)
{
    // int res = 1;
    // for (int i = 1; i <= a; i++)       without recursion...
    // {
    //     res = res * i;
    // }
    if (a==1)       //for stoping the loop;
     return 1;
    
    
    
    return a*factorial(a-1);
}