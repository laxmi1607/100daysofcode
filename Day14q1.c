//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1, count = 1; count <= n; i += 2, count++) {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}
