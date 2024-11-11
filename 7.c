#include<stdio.h>
int main()
{
    //USE OF OPERATORS("_")
    //size of operators for data types....
    int a;
    int b;
    printf("a is equal to \n");
    scanf("%d",&a);
    printf("b is equal to \n");
    scanf("%d",&b);
    printf("%lu\n",sizeof(char));
    printf("The value of a+b is %d\n",a+b);
    printf("The value of a/b is %d\n",a/b);
    printf("The value of a-b is %d\n",a-b);
    printf("The value of a*b is %d\n",a*b);
    return 0;
}