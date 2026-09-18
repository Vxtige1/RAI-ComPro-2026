#include <stdio.h>

int sum_of_odd_squares(int start, int end) {
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += (i * i);
        }
    }
    return sum;
}

int main(void) {
    int start, end;
    printf("Enter the two integers (start end): ");
    if (scanf("%d %d", &start, &end) == 2) {
        int result = sum_of_odd_squares(start, end);
        printf("Sum of squares of odd numbers from %d to %d is %d\n", start, end, result);
    }
    return 0;
}