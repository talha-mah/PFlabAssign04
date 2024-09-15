#include <stdio.h>

int main(){
    int time; 
    printf("Please enter current time in 24-hour format: ");
    scanf("%d", &time);

    if(time >= 5 && time <= 11){
        printf("GOOD MORNING");
    }
    else if (time >= 12 && time <= 18){
        printf("GOOD EVENING");
    }
    else if (time >= 18 && time <= 24){
        printf("GOOD NIGHT");
    }
}