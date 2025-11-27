//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int freq[10] = {0};  
    int digit, maxDigit = 0;

    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    for(int i = 1; i < 10; i++) {
        if(freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
