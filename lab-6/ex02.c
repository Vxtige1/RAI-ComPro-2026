#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reversed[9];
    int i;

    for (i = 0; i < 9; i++) {
        reversed[i] = original[8 - i];
    }

    printf("Reversed Array: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}