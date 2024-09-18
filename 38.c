#include <stdio.h>

int main() {
    int N, i = 1;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    while (i * i <= N) {
        printf("%d ", i * i);
        i++;
    }
    
    printf("\n");
    
    return 0;
}
