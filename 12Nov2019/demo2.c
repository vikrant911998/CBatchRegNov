//Write a program to calculate the area of square.

//side
//area  = side *side;

#include<stdio.h>

int main(){
    int side=0,perimeter=0;

    printf("Enter the side of the sqaure\n");
    scanf("%d",&side);
    
    perimeter = 4*side;

    printf("Perimeter = %d\n",perimeter);


    return 0;
}