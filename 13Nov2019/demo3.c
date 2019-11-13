#include<stdio.h>

//Conditional Statement

// 3.if- else if - else

int main(){
    int a;

    printf("Enter the number\n");
    scanf("%d",&a);

    if(a == 0){
        printf("%d is Zero Number\n",a);
    }
    else if(a > 0){
        printf("%d is positive Number\n",a);
    }
    else{
        printf("%d is Negative Number\n",a);
    }

    return 0;
}