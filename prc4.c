#include <stdio.h>

int main() {
    const char *names[] = {"Alice", "Bob", "Carol"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
