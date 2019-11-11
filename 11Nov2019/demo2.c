#include<stdio.h>

int main(){
    int length = 0, breadth = 0;
    int perimeter = 0;

    printf("Enter the length and breadth\n");
    scanf("%d %d",&length,&breadth);

    perimeter = 2*(length + breadth);

    printf("Perimeter : %d\n",perimeter);
    return 0;
}

