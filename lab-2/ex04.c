#include <stdio.h>

int main()
{
    char name[50];
    int student_id;
    float compro;
    float physics_score;
    float calculus_score;
    printf("Enter your Name: "); scanf("%s", &name);
    printf("Enter your Student ID: "); scanf("%d", &student_id);
    printf("Enter your Programming score: "); scanf("%f", &compro);
    printf("Enter your Physics score: "); scanf("%f", &physics_score);
    printf("Enter your Calculus score: "); scanf("%f", &calculus_score);
    float average_score = (compro + physics_score + calculus_score) / 3;
    printf("Hi %s(%d)! Your average score is: %.2f\n", name, student_id, average_score);

    return 0;
} 