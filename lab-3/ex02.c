#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number > 0 && number < 101)
    {
        if (number % 2 == 0) printf("%d is even", number);
        else printf("%d is odd", number);
    }
    else
    {
        printf("%d is out of range\n", number);
    }

    return 0;
}