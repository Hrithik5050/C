#include<stdio.h>
#include<math.h>
    int main(){
        // float i=2.0,j=3,k,l;
        // k=i/j*j;
        /*int y;
        y=7/2-8;
        printf("%d",y);*/

        int x,y,r,a,b,c,d,e;
        printf("Enter the value of x and y:");
        scanf("%d%d\n",&x,&y);
        a=pow(x,2);
        b=pow(y,2);
        c=a+b;
        r=pow(c,.5);
        e=x/y;
        d=atan(e);
        printf("%d and %d",r,e);


    return 0;
}