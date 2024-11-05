#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World";
    int vowels = 0, consonants = 0;
    char *p = str;

    while (*p) {
        if (isalpha(*p)) {
            if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
                *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
                vowels++;
            else
                consonants++;
        }
        p++;
    }

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
