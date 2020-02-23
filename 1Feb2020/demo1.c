#include<stdio.h>

//function with no return type and with argument.

//function declaration
void add( int , int );


int main(){

    //function calling
    add( 2, 3 );

    return 0;
}

//function definition
void add(int a,int b){
    printf("SUM = %d\n",a+b);
}