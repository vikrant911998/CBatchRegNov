//with return type and with argument
#include<stdio.h>
int mul(double,double);

int main()
{
    int result= mul(5,5);
    printf("%d\n",result);

    return 0;
}
int mul(double a,double b){
    int c;
    c=a*b;
    return c;
}
