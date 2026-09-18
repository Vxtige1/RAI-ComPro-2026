#include <stdio.h>

void process_indices(const int arr[], int n) {
    int even_sum = 0, even_count = 0;
    int odd_sum = 0, odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
            even_count++;
        } else {
            odd_sum += arr[i];
            odd_count++;
        }
    }

    double even_avg = (even_count > 0) ? (double)even_sum / even_count : 0.0;
    double odd_avg = (odd_count > 0) ? (double)odd_sum / odd_count : 0.0;

    printf("Output:\n");
    printf("Even index elements -> Sum: %d, Average: %.2f\n", even_sum, even_avg);
    if (odd_count > 0) {
        printf("Odd index elements -> Sum: %d, Average: %.2f\n", odd_sum, odd_avg);
    } else {
        printf("Odd index elements -> Sum: 0, Average: 0.00 (No odd index elements)\n");
    }
}

int main(void) {
    int n;
    printf("N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    process_indices(arr, n);
    return 0;
}