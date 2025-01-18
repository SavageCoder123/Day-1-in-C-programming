//Size of the processor using pointer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size;

    // Allocate memory dynamically for an array of integers
    printf("Enter the number of integers: ");
    scanf("%d", &size);
    ptr = (int*)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Size of the processor: %lu bytes\n", sizeof(ptr));

    // Free the allocated memory
    free(ptr);

    return 0;
}