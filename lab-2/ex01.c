#include <stdio.h>

int main()
{
    int num;
    float num_float;
    char ch;
    printf("Please enter an integer value: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    printf("Please enter a float value: ");
    scanf("%f", &num_float);
    printf("You entered: %f\n", num_float);
    printf("Please enter a character: ");
    scanf(" %c", &ch);
    printf("You entered: %c\n", ch);

    return 0;
}   