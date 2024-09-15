#include <stdio.h>
int main(){

    int temp;
    printf("Please enter the Temperature: ");
    scanf("%d", &temp);

    if (temp < 0){
        printf("FREEZING WEATHER");
    }
    else if (temp >= 0 && temp <= 10){
        printf("VERY COLD WEATHER");
    }
    else if (temp > 10 && temp <= 20){
        printf("COLD WEATHER");
    }
    else if (temp > 20 && temp <= 30){
        printf("NORMAL WEATHER");
    } 
    else if (temp > 31 && temp <= 40){
        printf("HOT WEATHER");
    }
    else if (temp > 40){
        printf("VERY HOT WEATHER");
    }
    
}