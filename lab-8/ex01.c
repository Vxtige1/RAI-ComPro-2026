#include <stdio.h>

double calc_base_are(double length, double width) {
    return length * width;
}

double calc_base_perimeter(double length, double width) {
    return 2 * (length + width);
}

double calc_volume (double length, double width, double height) {
    return length * width * height;
}

int main(void) { 
    double length, width, height; 

    while (1) {
        printf("Enter length, width, and height in cm: "); 
        if (scanf("%lf %lf %lf", &length, &width, &height) != 3) {
            return 1;
        }

        if (length <= 0 || width <= 0 || height <= 0) {
            printf("Error: All Dimensions must be greater than 0.\n");
        } else {
            break;
        }
    }

    printf("Base area: %.2f\n", calc_base_are(length, width));
    printf("Base perimeter: %.2f\n", calc_base_perimeter(length, width));
    printf("Volume: %.2f\n", calc_volume(length, width, height));

    return 0;
}
