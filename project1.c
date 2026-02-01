#include <stdio.h>

int main() {
    float usd_amount, inr_amount;
    float EXCHANGE_RATE = 92.0;

  
    printf("\n\t\033[1;36m==============================================\033[0m\n");
    printf("\t\033[1;36m||      TRAVELER'S CURRENCY TOOL      ||\033[0m\n");
    printf("\t\033[1;36m============================================\033[0m\n\n");

 
    printf("\t\033[1;33m[INPUT] Enter USD Amount ($): \033[0m");
    scanf("%f", &usd_amount);

   
    inr_amount = usd_amount * EXCHANGE_RATE;

    
    printf("\n\t\033[1;30m----------------------------------------\033[0m\n"); 
    printf("\t  &f INR\n", EXCHANGE_RATE);
    printf("\t\033[1;30m----------------------------------------\033[0m\n"); 

    printf("\n\t   \033[1;37mFinal Amount:\033[0m"); 
    printf("\n\t   \033[1;32m₹ %f INR\033[0m \n", inr_amount); 
    
    printf("\n\t\033[1;36m====================================\033[0m\n\n");

    return 0;
}