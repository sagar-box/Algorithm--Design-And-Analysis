#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        // Check if current element matches the key
        if(arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[100], n, key;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to search
    printf("Enter value to search: ");
    scanf("%d", &key);

    // Call the linear search function
    int result = linearSearch(arr, n, key);

    // Check result
    if(result != -1) {
        printf("Value found at position: %d\n", result + 1);
    } else {
        printf("Value not found in the array.\n");
    }

    return 0;
}