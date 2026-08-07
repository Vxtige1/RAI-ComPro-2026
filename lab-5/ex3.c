#include <stdio.h> 

int main() { 
    int marks[5];
    

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int highest = marks[0];
    int total = marks[0];
    for (int i = 1; i < 5; i++) {
        total += marks[i];

        if( marks[i] > highest) {
            highest = marks[i];
        }
    }
    printf("Highest marks: %d\n", highest);
    printf("Total marks: %d\n", total);
    return 0;
}