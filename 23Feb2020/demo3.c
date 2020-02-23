//Pointers
#include<stdio.h>

int main(){
    int a = 45;
    //pointer variables declaration.
    int *ptr;
    ptr = &a;

    printf("Address = %d\n",&a);
    printf("Address = %d\n",ptr);

    printf("value = %d\n",a);
    printf("value = %d\n",*ptr);

    return 0;
}