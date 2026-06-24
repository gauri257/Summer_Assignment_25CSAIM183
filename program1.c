#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, i, temp;

    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("Reversed Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}