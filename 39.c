#include <stdio.h>

int main() {
    int N, i, j;
    double factorial, sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += (double)i / factorial;
    }

    printf("Sum of the series: %.5f\n", sum);

    return 0;
}
