//WAP to find count of even and odd number in an array?


#include<stdio.h>

int main(){
    int a[5] = {12,23,41,16,9};

    int i=0,evencount=0,oddcount=0;

    for(i=0 ; i<5 ; i++){

        if( a[i]%2 == 0 ){
            evencount++;
        }
        else{
            oddcount++;
        }

    }

    printf("Even Count = %d\n",evencount);
    printf("Odd Count = %d\n",oddcount);


    return 0;
}