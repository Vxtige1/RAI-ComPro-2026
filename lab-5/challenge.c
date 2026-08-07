#include <stdio.h>
int main() {
    int n;
    printf("Input:\n");
    printf("Enter a number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int check[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        check[i] = 0;
    }
    printf("\nOutput:\n");

    for (int i = 0; i < n; i++) {
        if (check[i] == 1) {
            continue;
        }
        int count = 1; 

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                check[j] = 1; 
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }
    return 0;
}