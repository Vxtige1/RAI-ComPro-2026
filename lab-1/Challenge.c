#include <stdio.h>

int main()
{
    printf("+----------------+--------+--------+\n"); 
    printf("| %-14s | %6s | %6s |\n", "Name", "Score1", "Score2");
    printf("+----------------+--------+--------+\n"); 
    printf("| %-14s | %6s | %6s |\n", "Alice", "85", "90");
    printf("| %-14s | %6s | %6s |\n", "Bob", "78", "82");
    printf("| %-14s | %6s | %6s |\n", "Charlie", "92", "88");
    printf("+----------------+--------+--------+\n");
    return (0);
}