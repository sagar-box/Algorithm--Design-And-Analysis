#include <stdio.h>

int main() {
    // Our sorted array
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = 7;             // Size of the array
    int target = 7;        // The value we want to search

    int low = 0;           // Starting index
    int high = n - 1;      // Ending index
    int mid;               // Middle index
    int found = 0;         // Flag to indicate if element is found

    // Loop while low is less than or equal to high
    while (low <= high) {
        mid = (low + high) / 2;  // Always take the middle element

        if (arr[mid] == target) {
            // Target found
            printf("Found at index %d\n", mid);
            found = 1;           // Set found flag
            break;               // Stop searching
        }
        else if (arr[mid] < target) {
            // Target is larger, search in the right half
            low = mid + 1;
        }
        else {
            // Target is smaller, search in the left half
            high = mid - 1;
        }
    }

    // If element was not found
    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}