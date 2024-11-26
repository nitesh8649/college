#include <stdio.h>

void exchange(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int x = 5, y = 10;
    exchange(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}