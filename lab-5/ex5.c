#include <stdio.h>

int main() {
    int x[8];
    

    for (int i = 0; i < 8; i++){
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &x[i]);
    }

    int smallest = x[0], largest = x[0];
    for (int i = 0; i < 8; i++) {
        if (x[i] < smallest) {
            smallest = x[i];
        }
        if (x[i] > largest) {
            largest = x[i];
        }
    }
    printf("Smallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest);
    return 0;
}