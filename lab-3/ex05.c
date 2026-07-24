#include <stdio.h>

int main() {
    int num_1,num_2;
    printf("Enter cone height: ");
    scanf("%d", &num_1);
    printf("Enter cone base radius: ");
    scanf("%d", &num_2);

    float v = (1.0/3.0) * ((22.0/7.0) * num_2 * num_2 * num_1);
    printf("Cone volume = %.2f", v);
    if (v > 260) printf("\nThis cone is perfect for Supun project");
    else printf("\nThis cone is not fit for this project");

    return 0;
}