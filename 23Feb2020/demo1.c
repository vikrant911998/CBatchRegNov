//with return type and no argument
#include<stdio.h>
int add();

int main(){
    int result = add();
    printf("Result = %d\n",result);

    return 0;
}

int add(){
    
    int a,b;
    printf("Enter two Numbers\n");
    scanf("%d%d",&a,&b);

    return a+b;
}