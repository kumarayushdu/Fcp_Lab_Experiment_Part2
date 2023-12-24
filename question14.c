#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Size of the array
    int *arr; // Pointer to the dynamically allocated array

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Return an error code
    }

    // Input elements for the array
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
