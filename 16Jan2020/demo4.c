#include<stdio.h>

int main(){
    int a[5];
    int i=0;

    printf("Enter the Numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
        
    }
    printf("\n");

    return 0;
}