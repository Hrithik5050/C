#include<stdio.h>
#include<math.h>
int main(){
    int num,sum,initial,var,count,p,r,x,reverse;
    sum=0;
    count=0;
    printf("Enter a n digit number:");
    scanf("%d",&num);
    x=num;
    initial=num;
    while(num!=0){
        num=num/10;
        count++;
    }
r=count;

while (initial!=0){
//   we done this just to seperate each digit as modulo gives remainder
    p=initial%10;
    // reverse=p;
    printf("%d",reverse);
    var=pow(p,r);
    sum=sum+var;
    initial=initial/10;
    // we done this just to get quotient and run the program recursively
}
printf("%d\n",sum);
if (sum==x)
{
    printf("Number is armstrong");
}
else{
    printf("Number is not armstrong");
}
return 0;
}


