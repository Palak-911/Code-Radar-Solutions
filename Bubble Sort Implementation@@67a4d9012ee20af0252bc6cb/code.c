#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap using a temporary variable
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Input number of elements
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }
    
    bubbleSort(arr, n);  // Sort the array using bubbleSort
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print the sorted array
    }
    printf("\n");
    
    return 0;
}