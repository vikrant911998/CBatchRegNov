#include<stdio.h>

void simpleInterest(int ,int, float);


int main(){

    simpleInterest(2000,3,4.45);

    return 0;
}

void simpleInterest(int p,int r,float t){
    int si = (p*r*t)/100;
    printf("Interest = %d\n",si);
}