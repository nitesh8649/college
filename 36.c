#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}
