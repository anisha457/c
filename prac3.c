#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data data;
    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 3.14;
    printf("Float: %.2f\n", data.f);

    return 0;
}
