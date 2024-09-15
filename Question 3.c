#include <stdio.h>

int main () {

    char input; 
    printf("Enter the Character = ");
    scanf("%c", &input);

    if(input >= 'A' && input <= 'Z'){
        printf("Character is UPPER CASE");
    }
     else if(input >= 'a' && input <= 'z'){
        printf("Character is LOWER CASE"); 
     }
     else if(input >= '0' && input <= '9'){
        printf("Character is DIGIT");
     }    
     else 
     printf("Character is SPECIAL CHARACTER"); 
}