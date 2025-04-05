int findUnsortedSubarray(int arr[], int n) {
    int left = -1, right = -1;
    
    // Find the left boundary where the array becomes unsorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            left = i;
            break;
        }
    }
    
    // Find the right boundary where the array becomes unsorted
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
    
    // Return the length of the subarray to sort
    return right - left + 1;
}