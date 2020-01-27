#include<stdio.h>

//function declaration
void check();

int main(){

    //function calling
    check();

    return 0;
}

//function definition
void check(){
    int num;

    printf("Enter the Number\n");
    scanf("%d",&num);

    if(num %2 == 0){
        printf("Even Number\n");
    }
    else{
        printf("Odd Number\n");
    }

    
}