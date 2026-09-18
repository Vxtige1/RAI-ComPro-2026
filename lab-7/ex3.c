#include <stdio.h>

int main() {
    int array[] = {3, 1, 2, 4, 5, 6};
    int size = 6;

    int max = *(array + 0);
    int min = *(array + 0);

    for (int i = 1; i < size; i++) {
        if (*(array + i) > max)
            max = *(array + i);
        if (*(array + i) < min)
            min = *(array + i);
    }

    printf("Max value: %d\n", max);
    printf("Min value: %d\n", min);

    return 0;
}