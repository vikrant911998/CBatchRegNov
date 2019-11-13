#include<stdio.h>

//Conditional Statement
// 1.if
// 2.if-else
// 3.if- else if - else

int main(){
    int a;

    printf("Enter the number\n");
    scanf("%d",&a);

    if(a %2 == 0){
        printf("%d is Even Number\n",a);
    }
    else{
        printf("%d is Odd Number\n",a);
    }

    return 0;
}