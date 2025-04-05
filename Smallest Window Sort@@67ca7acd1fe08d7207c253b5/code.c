#include<stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1;

    // Step 1: Find the left boundary where the array becomes unsorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            left = i;
            break;
        }
    }

    // Step 2: Find the right boundary where the array becomes unsorted
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            right = i;
            break;
        }
    }

    // If no unsorted subarray is found, the array is already sorted
    if (left == -1 || right == -1) {
        return 0;
    }

    // Step 3: Find the min and max of the subarray between left and right
    int min = arr[left], max = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Step 4: Expand the left boundary to include any values that are out of order
    while (left > 0 && arr[left - 1] > min) {
        left--;
    }

    // Step 5: Expand the right boundary to include any values that are out of order
    while (right < n - 1 && arr[right + 1] < max) {
        right++;
    }

    // Step 6: Return the length of the subarray
    return right - left + 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[10000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", findUnsortedSubarray(arr, n));
    }
    return 0;
}
