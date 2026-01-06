#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    MYTYPE_INT,
    MYTYPE_STR
} mytype;

typedef struct {
    mytype type;
    union {
        int number;
        char str[100];
    } value;
} Data;

int main() {
    Data person;
    person.type = MYTYPE_STR;
    strcpy(person.value.str, "Neva");
    switch (person.type) {
        case MYTYPE_STR:
            printf("Hello %s\n", person.value.str);
            break;
        case MYTYPE_INT:
            printf("Hello %d\n", person.value.number);
            break;
    };
    return 0;
}
