#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number > 0 && number <= 100 ? 1:0)
    {
    case 1:
        switch (number % 2)
        {
        case 0:
            printf("%d is even\n", number);
            break;
        default:
            printf("%d is odd\n", number);
            break;
        }
        break;
    case 0:
        printf("%d is out of range\n", number);
        break;
    }
    
    return 0;
}