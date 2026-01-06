#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a macro function
#define ADD(a,b) ((a) + (b))

int main() {
    // use macro function
    int number = ADD(1 << 2, 1);
    printf("%d\n", number);
    printf("%d\n", 1 << 2);
    printf("%d\n", (1 << 2) + 1);
    return 0;
}
