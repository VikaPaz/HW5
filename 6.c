#include <stdio.h>
#include <stdlib.h>

int abs_arr(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * -1;
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = abs_arr(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%d", count);
    
    free(arr);
    return 0;
}