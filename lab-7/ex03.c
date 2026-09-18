#include <stdio.h>

int main(void) {
    int array[] = {3,1,2,4,5,6}; 
    int size = sizeof(array) / sizeof(array[0]);
    int max = *array;

    for (int i = 1; i < size; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }
    printf("Max value in the array is: %d\n", max);
    return 0;
}