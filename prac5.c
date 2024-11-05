#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

void printStudent(struct Student s) {
    printf("ID: %d, Name: %s\n", s.id, s.name);
}

struct Student getStudent() {
    struct Student s = {3, "Carol"};
    return s;
}

int main() {
    struct Student s1 = {1, "Alice"};
    printStudent(s1);

    struct Student s2 = getStudent();
    printStudent(s2);

    return 0;
}
