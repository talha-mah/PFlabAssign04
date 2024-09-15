#include <stdio.h>
#include <math.h>

int main (){

    int nts, fsc; 
    printf("Enter your NTS marks: ");
    scanf("%d", &nts);
    printf("Enter your FSC marks: "); 
    scanf("%d", &fsc);

    if(fsc >= 70 && nts >= 70){
        printf("You're selected in Oxford University in IT department \n");
    }
    else if(fsc >= 70 && nts >= 60){
        printf("You're selected in Oxford University in Electronics department \n");
    }
    else if(fsc >= 70 && nts >= 50){
        printf("You're selected in Oxford University in Telecommunication department \n");
    }
    else{
        printf("Your're not selected in Oxford University \n");
    }

    if(fsc >= 60 && fsc <= 70 && nts >= 50){
        printf("You're selected in MIT University in IT department \n");
    }
    else if(fsc >= 50 && fsc <= 59 && nts >= 50){
        printf("You're selected in MIT University in Chemical department \n");
    }
    else if(fsc >= 40 && fsc <= 50 && nts >=50){
        printf("You're selected in MIT University in Computer department \n");
    }
    else {
        printf("You're not selected in MIT university \n");
    }

    return 0; 
}
