#include <stdio.h>
#include <ctype.h>

void count_characters(const char *str, int *letters, int *digits, int *specials) {
    *letters = 0;
    *digits = 0;
    *specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            (*letters)++;
        } else if (isdigit((unsigned char)str[i])) {
            (*digits)++;
        } else {
            (*specials)++;
        }
    }
}

int main(void) {
    const char input[] = "C-Pro 2026!";
    int letters, digits, specials;

    printf("Input: \"%s\"\n", input);
    count_characters(input, &letters, &digits, &specials);

    printf("Output:\n");
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special Characters / Symbols: %d\n", specials);

    return 0;
}