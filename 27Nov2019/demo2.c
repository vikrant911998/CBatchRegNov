#include<stdio.h>

int main(){
    int a = 0;
    
    // printf("size  = %d \n",sizeof(int));

    printf("Enter the number\n");
    scanf("%d",&a);
    int t = a;

    printf("Odd NUmbers\n");
    while( a > 0 ){

        if( a%2 == 1 ){
            printf("%d ",a);
        }

        a--;
    }

    a = t;
    printf("Even NUmbers\n");
    while( a > 0 ){

        if( a%2 == 0 ){
            printf("%d  ",a);
        }

        a--;
    }

    return 0;
}


// a = a+1; //a = 4+1, a++
        // a = a-1; //a = 4-1,a--