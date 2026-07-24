#include <stdio.h>

int main()
{
    int a[3];
    float b[3];
    char c[3];

    printf("Calculus score: ");
    scanf("%d", &a[0]);
    printf("Physic score: ");
    scanf("%d", &a[1]);
    printf("Compro score: ");
    scanf("%d", &a[2]);

    for (int i = 0; i < 3; i++)
    {
        if (a[i] >= 80)
        {
            b[i] = 4.0;
            c[i] = 'A';
        }
        else if (a[i] >= 70)
        {
            b[i] = 3.0;
            c[i] = 'B';
        }
        else if (a[i] >= 60)
        {
            b[i] = 2.0;
            c[i] = 'C';
        }
        else if (a[i] >= 50)
        {
            b[i] = 1.0;
            c[i] = 'D';
        }
        else
        {
            b[i] = 0.0;
            c[i] = 'F';
        }
    }

    printf("%-8s %-8s %-8s %-8s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------\n");
    printf("%-8s %-8d %-8c %-80.2f\n", "Cal", a[0], c[0], b[0]);
    printf("%-8s %-8d %-8c %-80.2f\n", "Physics", a[1], c[1], b[1]);
    printf("%-8s %-8d %-8c %-80.2f\n\n", "compro", a[2], c[2], b[2]);
    printf("%-8s %-40.1f\n", "GPA: ", (b[0] + b[1] + b[2]) / 3);

    return 0;
}   