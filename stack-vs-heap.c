#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stack vs Heap Memory allocation 
char* heap_string(int how_much) {
    char* memory = malloc(how_much);
    return memory;
}

int main() {
    // Heap allocation
    char* str_heap = heap_string(10);
    strcpy(str_heap, "heap");
    printf("Message: %s\n", str_heap);
    free(str_heap); // <-- mandatory for heap, clean memory after use.

    // Stack allocation
    char str_stack[10] = "stack"; // Stack String
    printf("Message: %s\n", str_stack);

    return 0;
}


