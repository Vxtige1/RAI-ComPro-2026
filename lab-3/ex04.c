#include <stdio.h>

int main() {
    int calculus, physics, science;
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%d", &calculus);
    printf("Enter your Physics score: ");
    scanf("%d", &physics);
    printf("Enter your Science score: ");
    scanf("%d", &science);

    float z = (calculus + physics + science) / 3.0;

    if (z >= 80)
    {
        printf("%s, you average is %.2f. You got grade A.", name, z);
    }
    else if (z >= 70)
    {
        printf("%s, you average is %.2f. You got grade B.", name, z);
    }
    else if (z >= 60)
    {
        printf("%s, you average is %.2f. You got grade C.", name, z);
    }
    else if (z >= 50)
    {
        printf("%s, you average is %.2f. You got grade D.", name, z);
    }
    else
    {
        printf("%s, you average is %.2f. You got grade F.", name, z);
    }

    return 0;
}