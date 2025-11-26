//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    
    if ((int)sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
