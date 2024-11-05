#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student students[2] = {{1, "Alice"}, {2, "Bob"}};

    for (int i = 0; i < 2; i++) {
        printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
    }
    
    return 0;
}
