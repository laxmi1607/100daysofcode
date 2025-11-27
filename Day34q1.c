//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n + 1];  

    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, key;
    scanf("%d %d", &pos, &key);

    
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;  
    n++;             

    
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
