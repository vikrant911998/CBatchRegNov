#include<stdio.h>

//Ternary Operator
// condition ? true :false;
int main(){
    int a = 10;

    int b = (a%5==0) ? 99 : 0; 
    // int b = 99;
    //int b=0;

    printf("%d \n",b);



    return 0;
}