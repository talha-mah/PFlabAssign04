#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2, operator, final;
    printf("Enter Number 1 = ");
    scanf("%d", &num1);
    printf("Enter Number 2 = ");
    scanf("%d", &num2);
    printf("Enter number to perform operation \n Enter 1 to perform + \n Enter 2 to perform - \n Enter 3 to perform * \n Enter 4 to perform / \n");
    scanf("%d", &operator);

    switch (operator)
    {
    case 1:
        final = num1 + num2; 
        printf("Your answer is %d", final);
        break;
    case 2:
        final = num1 - num2; 
        printf("Your answer is %d", final);
        break;
    case 3:
        final = num1 * num2;
        printf("Your answer is %d", final);
        break;
    case 4: 
        final = num1 / num2; 
        printf("Your answer is %d", final); 
        break;
    }

}