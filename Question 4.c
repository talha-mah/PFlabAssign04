#include <stdio.h>

int main()
{
int price, discounted_price, discount;
printf("Enter the price of your item = ");
scanf("%d", &price);

if (price < 500){
    printf("You are not eligible for discount");
}
else if (price < 2000){
    discounted_price = price * (0.95); 
    discount = price - discounted_price; 
    printf("Original price was %d \nYour discounted price is %d \nYou got a total discount of %d", price, discounted_price, discount);
}
else if (price > 2000 && price < 4000){
    discounted_price = price * (0.90);
    discount = price - discounted_price; 
    printf("Original price was %d \nYour discounted price is %d \nYou got a total discount of %d", price, discounted_price,discount);
}
else if (price > 4000 && price < 6000){
    discounted_price = price * (0.80);
    discount = price - discounted_price; 
    printf("Original price was %d \nYour discounted price is %d \nYou got a total discount of %d", price, discounted_price,discount);
}
else if (price > 6000){
    discounted_price = price * (0.65);
    discount = price - discounted_price; 
    printf("Original price was %d \nYour discounted price is %d \nYou got a total discount of %d", price, discounted_price,discount);

}
}