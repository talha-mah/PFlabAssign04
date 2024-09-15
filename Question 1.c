#include <stdio.h>

int main(){

    int num; 
    printf("Please enter the number = ");
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("The number is multiple of 3");
    }
    else { 
        printf("The number is not multiple of 3");
    }
}


