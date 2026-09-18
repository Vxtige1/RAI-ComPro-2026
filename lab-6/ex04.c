#include <stdio.h>

int main() {
    int values[10];
    int i, even = 0, odd = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    for (i = 0; i < 10; i++) {
        if (values[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}