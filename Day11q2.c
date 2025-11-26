//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLossPercent;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if(sellingPrice > costPrice) {
        profitLossPercent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.2f%%", profitLossPercent);
    }
    else if(sellingPrice < costPrice) {
        profitLossPercent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.2f%%", profitLossPercent);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
