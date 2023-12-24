#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    int *arr; 

   
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));

   
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; 
    }

   
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

   
    free(arr);

    return 0;
}
