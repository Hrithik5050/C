#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("%d\n",*x);
    printf("%d",*y);
    return;
}
int main(){
    int a=5;
    int b=10;
    swap(&a,&b);
    return 0;

}