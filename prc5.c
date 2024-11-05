#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s = {1, "Alice"};
    struct Student *p = &s;

    printf("ID: %d, Name: %s\n", p->id, p->name);
    return 0;
}
