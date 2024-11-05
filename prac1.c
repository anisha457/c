#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s = {1, "Alice"};
    printf("ID: %d, Name: %s\n", s.id, s.name);
    return 0;
}
