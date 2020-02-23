//function with return type and arguments
//return_type(Data_type) function_name( arguments(variables) ){

    //function body
// }

#include<stdio.h>
//function declaration ->to tell the compiler about the new created function.
int add(int ,int );


int main(){

    //function calling.
    int result = add(2,3);
    printf("Value = %d\n",result);
    
    return 0;
}

int add(int a,int b){
    int c = a+b;
    return c;
}