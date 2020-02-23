#include<stdio.h>
int add();


int main()
{

    int result=add(45,45);
    printf("%d",result);
    return 0;

}

int add()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;

    return c;
}
