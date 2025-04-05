#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Bubble sort algorithm
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                // Swap a[j] and a[j+1]
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    // Output sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
