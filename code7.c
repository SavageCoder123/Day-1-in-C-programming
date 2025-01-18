//Swap 2 numbers using XOR without commas in one line
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap in one line without commas
    a = a ^ b; b = a ^ b; a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}