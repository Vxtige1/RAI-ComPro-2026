#include <stdio.h>

int main(void) { 
    int test = 0;
    printf("Address of the test variable is at: %p\n", (void*)&test);
    return 0;
}