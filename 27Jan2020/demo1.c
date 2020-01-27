#include<stdio.h>

//No return type->void
//No argument -> function_name()
//function declaration
void simpleInterest();

int main(){

    //function calling
    simpleInterest();

    return 0;
}

//function definition
void simpleInterest(){
    int principal,time;
    double rate;

    printf("Enter the Principal , Time and Rate \n");
    scanf("%d%d%lf",&principal,&time,&rate);

    double si = (principal*time*rate)/100;

    printf("Simple Interest = %lf\n",si);

}