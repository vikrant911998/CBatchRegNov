#include<stdio.h>

int main(){
    int i,j;

    // outer loop->row
    for(i=1;i<=5;i++){

        //inner loop -> column
        for(j=1;j<=5;j++){
            printf("%d ",i);
        }
        printf("\n");

    }
    return 0;
}