#include<stdio.h>

// Function to perform bubble sort and return the sorted array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop for passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparisons
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1] if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    // Take input for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  // Declare the array
    
    // Take input for the array elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}