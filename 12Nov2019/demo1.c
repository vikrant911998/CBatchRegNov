//Write a program to calculate the area of square.

//side
//area  = side *side;

#include<stdio.h>

int main(){
    int side=0,area=0;

    printf("Enter the side of the sqaure\n");
    scanf("%d",&side);
    
    area = side*side;

    printf("Area  = %d\n",area);


    return 0;
}