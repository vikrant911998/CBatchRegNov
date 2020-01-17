//Write a program
//to search a number in the array?

#include<stdio.h>


int main(){
    int a[10];
    int i=0;
  
    int number=0;

    printf("Enter the Elements of the Array\n");
    for( i=0 ; i<10 ; i++ ){
        scanf("%d",&a[i]);
    }

    // for( i=0 ; i<10 ; i++ ){
    //     printf("%d  ",a[i]);
    // }
    // printf("\n");

    printf("Enter the Number to be searched\n");
    scanf("%d",&number);


    for( i=0 ; i<10 ; i++ ){
        if( a[i]==number ){
            printf("Element  Found\n");
            break;
        }
    }
    printf("\n");


    if( i==10 ){
        printf("Element Not Found\n");
    }




    return 0;
}
