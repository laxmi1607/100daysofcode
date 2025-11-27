//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, pow = 1;

    scanf("%d", &num);
    temp = num;

    
    while(temp >= 10) {
        temp /= 10;
        pow *= 10;
        digits++;
    }

    first = num / pow;     
    last  = num % 10;      
    int middle = (num % pow) / 10;  

    
    int result = last * pow + middle * 10 + first;

    printf("%d", result);

    return 0;
}


