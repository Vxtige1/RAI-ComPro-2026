#include <stdio.h>

int main()
{
    int num;
    printf("Enter total minutes: ");
    scanf("%d", &num);
    int hours = num / 60;
    int minutes = num % 60;
    printf("%d minutes is equivalent to %d hours and %d minutes\n", num, hours, minutes);
    
    return 0;
}