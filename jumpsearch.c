#include <stdio.h>
#include <math.h>

int jumpSearch(int arr[], int n, int key) {
    int jumpSize = sqrt(n);  // how many elements to jump
    int lower = 0;
    int higher = jumpSize;

    // Jump through the array to find the block
    while (higher < n && arr[higher - 1] < key) {
        lower = higher;
        higher += jumpSize;
        if (lower >= n)
            return -1;  // key not found
    }

    // Search linearly in the block
    for (int i = lower; i < higher && i < n; i++) {
        if (arr[i] == key)
            return i;  // key found
    }

    return -1;  // key not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int result = jumpSearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}




/* while (end < n && arr[end - 1] < key) {
    start = end;        // move start to next block
    end = end + step;   // jump forward by step size

    if (start >= n)
        return -1;      // key cannot exist
}.   */

