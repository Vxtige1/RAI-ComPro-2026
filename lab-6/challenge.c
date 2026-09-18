#include <stdio.h>

int main() {
    int n, i, j, count, already;

    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOutput:\n");
    for (i = 0; i < n; i++) {
        already = 0;
        for (j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                already = 1;
                break;
            }
        }

        if (!already) {
            count = 0;
            for (j = 0; j < n; j++) {
                if (arr[j] == arr[i])
                    count++;
            }
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}