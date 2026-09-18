#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}