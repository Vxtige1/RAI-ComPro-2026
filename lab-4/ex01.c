#include <stdio.h>

int main(void)
{
    int i;
    int num;
    int sum;
    float avg;

    sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum += num;
    }
    avg = (float)sum / 10;
    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", avg);
    return (0);
}