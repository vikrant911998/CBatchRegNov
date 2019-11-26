#include<stdio.h>

int main(){
    int a[5];
    
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

    int i=0;
    // printf("Enter 5 elements of the array\n");
    // for(i=0;i<5;i++){
    //     scanf("%d",&a[i]);
    // }
    
    printf("Array Elements are =\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }


    

    return 0;
}