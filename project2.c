#include <stdio.h>

int main() {

    float price, quantity, tax_percent, base_amount, tax_amount, final_total;

    printf("\n\t\033[1;36m=========================================\033[0m\n");
    printf("\t\033[1;36m       SHOPPING BILL ESTIMATOR           \033[0m\n");
    printf("\t\033[1;36m=========================================\033[0m\n");
    
    printf("\n\tEnter Item Price (INR) : ");
    scanf("%f", &price);

    printf("\tEnter Quantity         : ");
    scanf("%f", &quantity);

    printf("\tEnter Tax Rate (%%)     : ");
    scanf("%f", &tax_percent);

   
    base_amount = price * quantity;
    tax_amount = base_amount * (tax_percent / 100);
    final_total = base_amount + tax_amount;

    
    printf("\n\t========================================");
    printf("\n\tItem Total             : Rs. %f", base_amount);
    printf("\n\tTax Added (+%.0f%%)       : Rs. %f", tax_percent, tax_amount);
    printf("\n\t======================================");
    
   
    printf("\n\t\033[1;32mGRAND TOTAL TO PAY     : Rs. %f\033[0m", final_total);
    printf("\n\t============================================-\n\n");

    return 0;
}