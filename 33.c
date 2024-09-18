#include <stdio.h>

int main() {
    int n, i, num;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;

    for (i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
