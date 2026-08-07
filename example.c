#include<stdio.h>

int main() { 
    float num1 , num2;
    pritnf("Enter number1 :");
    scanf("%f",&num1);
    printf("Enter number2 :");
    scanf("%f",&num2);
    if(num2 != 0) 
        printf("Result: %f\n", num1 / num2);
    else 
    printf("Error: Division by zero is not allowed.\n");

    return 0;
}