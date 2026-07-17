#include <stdio.h>

int main()
{
    char name[50];
    int age;
    int height;
    int weight;
    char gender[50];
    char education[50];
    printf("Enter you Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your Height: ");
    scanf("%f", &height);
    printf("Enter your Weight: ");
    scanf("%d", &weight);
    printf("Enter your Gender: ");
    scanf("%s", gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", education);

    printf("\n\n");

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f    \n", height);
    printf("Weight: %d\n", weight);
    printf("Gender: %s\n", gender);
    printf("Education: %s\n", education);

    return 0;
}