#include<stdio.h>
int main()
{
    //gcc -Wall -save-temps add.c -o add("To show the compilation process")
    int a,b;
    printf("Enter no a\n");
    scanf("%d",&a);
    printf("Enter no b\n");

    scanf("%d",&b);
    printf("The no is %d\n",a+b);
    return 0;

}