//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, remainder, product = 1;
    int hasOdd = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (!hasOdd) {
        product = 1; 
    }

    printf("Product of odd digits is %d\n", product);

    return 0;
}
