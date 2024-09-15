#include <stdio.h>

int main()
{
    int price,unit_consumed;
    int customer_id;

    printf("Enter your customer ID = ");
    scanf("%d", &customer_id);
    printf("Enter the Units Consumed = ");
    scanf("%d", &unit_consumed);

    if( unit_consumed <= 199){
        price = unit_consumed * (16.20);
    }
    else if (unit_consumed > 200 && unit_consumed < 300){
        price = unit_consumed * (20.10);
    }
    else if (unit_consumed > 300 && unit_consumed < 500){
        price = unit_consumed * (27.10);
    }
    else if (unit_consumed >= 500){
        price = unit_consumed * (35.90);
    }

    if (price > 18000);
    price = price * (1.15);  
    
    printf("Dear Customer, Your ID is %d \nYour total bill is %d", customer_id, price);

}