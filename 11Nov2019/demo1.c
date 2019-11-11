#include<stdio.h>

int main(){
    int length = 0,breadth = 0;
    int area = 0;

    printf("Enter the length and breadth\n");
    scanf("%d %d",&length,&breadth);

    area = length * breadth;

    printf("Area : %d\n",area);
    return 0;
}