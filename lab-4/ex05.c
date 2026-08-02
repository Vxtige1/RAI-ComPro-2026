#include <stdio.h>

int main(void)
{
    int num;
    int i;
    long fctr;

    printf("Enter a number: ");
    scanf("%d", &num);
    fctr = 1;
    for (i = 1; i <= num; i++)
    {
        fctr *= i;
    }
    printf("Factorial of %d is %ld\n", num, fctr);
    return (0);
}