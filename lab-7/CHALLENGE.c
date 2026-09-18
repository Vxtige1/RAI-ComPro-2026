#include <stdio.h>

int main() {
    int arr[5];
    int size = 5;

    printf("Enter 5 integers: ");
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);

    // Bubble Sort descending using pointer arithmetic
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(arr + j) < *(arr + j + 1)) {
                int tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
            }
        }
    }

    printf("Sorted descending:");
    for (int i = 0; i < size; i++)
        printf(" %d", *(arr + i));
    printf("\n");

    return 0;
}