#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct {
    char name[10];
    int age;
} Person;
//typedef struct Person Person;

// Like an alias
typedef unsigned int myint;

int main() {
    // Init on stack
    Person misha;

    // Assign data
    misha.age = 1000;
    assert(sizeof("Misha") <= sizeof(misha.name));
    strcpy(misha.name, "Misha");

    // Print 
    printf("Name: %s\n", misha.name);
    printf("Age: %d\n", misha.age);

    return 0;
}
