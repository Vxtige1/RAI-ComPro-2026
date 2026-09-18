#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    double grade;
};

double calculate_average(const struct Student students[], int count) {
    double total = 0.0;
    for (int i = 0; i < count; i++) {
        total += students[i].grade;
    }
    return (count > 0) ? (total / count) : 0.0;
}

int find_highest_index(const struct Student students[], int count) {
    int idx = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].grade > students[idx].grade) {
            idx = i;
        }
    }
    return idx;
}

int find_lowest_index(const struct Student students[], int count) {
    int idx = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].grade < students[idx].grade) {
            idx = i;
        }
    }
    return idx;
}

char get_letter_grade(double grade) {
    if (grade >= 80.0) return 'A';
    if (grade >= 70.0) return 'B';
    if (grade >= 60.0) return 'C';
    return 'F';
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        if (scanf("%99s", students[i].name) != 1) {
            return 1;
        }
        printf("Enter grade of %s: ", students[i].name);
        if (scanf("%lf", &students[i].grade) != 1) {
            return 1;
        }
    }

    double avg = calculate_average(students, n);
    int high_idx = find_highest_index(students, n);
    int low_idx = find_lowest_index(students, n);

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %.0f (%s)\n", students[high_idx].grade, students[high_idx].name);
    printf("Lowest grade: %.0f (%s)\n", students[low_idx].grade, students[low_idx].name);
    printf("Students who passed:\n");

    for (int i = 0; i < n; i++) {
        if (students[i].grade >= 60.0) {
            printf("%s Grade %c\n", students[i].name, get_letter_grade(students[i].grade));
        }
    }

    return 0;
}