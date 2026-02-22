#include <stdio.h>

// Function to find the leftmost index of a given key in a sorted array
int leftMostIndex(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    int result = -1;  // If key is not found, return -1

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            result = mid;       // Key found, but check if it occurs earlier
            right = mid - 1;    // Move left to find an earlier occurrence
        } 
        else if (arr[mid] < key) {
            left = mid + 1;     // Key is on the right side
        } 
        else {
            right = mid - 1;    // Key is on the left side
        }
    }

    return result;  // Returns leftmost index or -1 if not found
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int index = leftMostIndex(arr, n, key);

    if (index != -1)
        printf("Leftmost index of %d is %d\n", key, index);
    else
        printf("%d is not present in the array\n", key);

    return 0;
}