#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%d\n",&a);
    printf("%d\n",*x);
    *x=7;      //change the value of stored address in pointer
    // x=7;
    printf("%d\n",a);
    // printf("%d",x); //throw error from pointer to integer type casting,
    return 0;
}