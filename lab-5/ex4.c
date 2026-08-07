#include <stdio.h>

int main()
{
    int value[10];
    int odd = 0, even = 0;

    for (int i = 0 ; i < 10; i++)
    {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &value[i]);
    }
    for (int i = 0; i < 10 ; i++)
    {
        if (value[i] % 2 == 0 ) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return (0);
}