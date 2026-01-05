#include <stdio.h>
#include <stdlib.h>

void add10(int* number) {
    // Validate user input
    if (number == NULL) return;
    *number += 10;
}

int main() {
    int myNumber = 100;
    printf("Before: %d\n", myNumber);
    add10(&myNumber);
    printf("After: %d\n", myNumber);

    return 0;
}
