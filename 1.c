#include <stdio.h>

void swap(int arr[], int n) {
    int k = n / 2;
    for (int i = 0; i < k; i++) {
        int prev = arr[i];
        arr[i] = arr[i + k];
        arr[i + k] = prev;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    swap(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
