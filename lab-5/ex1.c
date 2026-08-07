#include <stdio.h>

int main()
{
    int x[10];
    int i; 
    for (i = 1 ; i <= 10; i++)
    {
        printf("Enter the value %d here: ", i);
        scanf("%d", &x[i]);
    }

    printf("Value in array are: ");
    for (i = 1; i <=10; i++) {
        if (i < 9) { 
            printf("%d, ", x[i]);
        } else {
            printf("%d\n", x[i]);
        }
    }
    return (0);
}