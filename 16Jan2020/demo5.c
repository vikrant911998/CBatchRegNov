
#include<stdio.h>

int main(){
    int size = 0;

    printf("Enter the Size of the Array\n");
    scanf("%d",&size);

    int a[size];
    int i=0;

    
    for(i=0 ; i<size ; i++){
        a[i] = i*50;
    }

    printf("Array Elements are :-\n");
    for(i=0 ; i<size ; i++){
        printf("%d ",a[i]);
        
    }
    printf("\n");

    return 0;
}