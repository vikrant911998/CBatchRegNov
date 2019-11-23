#include<stdio.h>
//Loop 
//while,do-while,for.


int main(){
    // condition ? true : false;
    int a=1;
    int n=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    while(a <= n){
        if(a %2 != 0)
            printf("%d\n",a);
        
        // a = a+3;
        a++;
    }


    return 0;
}