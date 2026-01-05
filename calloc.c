#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
The library function calloc has the following declaration:

void calloc(size_t nmemb, size_t size);

According to the library documentation, “The calloc function allocates memory for an array of nmemb elements of size bytes each. The memory is set to zero. If nmemb or size is zero, then calloc returns NULL.”
Write an implementation of calloc that performs the allocation by a call to malloc and sets the memory to zero via memset. Your code should not have any vulnerabilities due to arithmetic overflow, and it should work correctly regardless of the number of bits used to represent data of type size_t.
As a reference, functions malloc and memset have the following declarations:

void malloc(size_t size);
void memset(voids, int c, size_t n);
*/


void* stephen_calloc(size_t nmemb, size_t size) {
    // validate user input
    if (nmemb <= 0 || size <= 0) {
        return NULL;
    }

    // allocate memory based on size
    void* data = malloc(nmemb * size);

    // if allocation fails
    if (data == NULL) {
        return NULL;
    }

    // set all memo
    memset(data, 0, nmemb * size);
    return (void*)data;
}

void* torva_calloc(size_t nmemb, size_t size) {
    if (nmemb == 0 || size == 0) {
        return NULL;
    }
    if (nmemb > SIZE_MAX / size) {
        return NULL;
    }
    size_t total = nmemb * size;
    void *ptr = malloc(total);
    if (ptr == NULL) {
        return NULL;
    }
    memset(ptr, 0, total);
    return ptr;
}

/*
    TODO: strings (char* )
    TODO: structs
    TODO: by reference var passing into functions (instead of copy)
    TODO: static var
    TODO: enum
    TODO: recursion
    TODO: header files.h
    TODO: Bitshifting / Bitwise operators
    TODO: careful about memory boundries (over/under runs)
    TODO: Heap/Stack allocation ( differences )  Heap with Malloc
    TODO: reading files
    TODO: reading and writing STDIO STDERR
    TODO: bitwise logic operators vs bitshifiting operators
    TODO: ...
*/

// Define the prototype before defining the function
int generate_number();

int main() { 
    //char* string = "aslkdfjalksdfjlkasdjfl";
    char* string = stephen_calloc(10, 10);
    int num = generate_number();
    printf("hello!!!\n");
    printf("%d",num);
    //free(string);
    return 0;
}

int generate_number() {
    return 10;
}
