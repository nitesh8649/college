#include <stdio.h>

#define SIZE_COUNT 6

void calculateHatSize(double circumference);

int main() {
    double headCircumference;

    printf("Enter your head circumference in inches: ");
    scanf("%lf", &headCircumference);

    calculateHatSize(headCircumference);

    return 0;
}

void calculateHatSize(double circumference) {
    double usSize[SIZE_COUNT][2] = {
        {6.5, 20.5}, {6.625, 20.75}, {6.75, 21}, {6.875, 21.25},
        {7.0, 21.5}, {7.125, 21.75}
    };
    
    double ukSize[SIZE_COUNT][2] = {
        {6.5, 20.25}, {6.625, 20.5}, {6.75, 20.75}, {6.875, 21},
        {7.0, 21.25}, {7.125, 21.5}
    };

    int found = 0;

    for (int i = 0; i < SIZE_COUNT; i++) {
        if (circumference <= usSize[i][1] && circumference > usSize[i-1][1]) {
            printf("US Hat Size: %.2f\n", usSize[i][0]);
            found = 1;
            break;
        }
        if (circumference <= ukSize[i][1] && circumference > ukSize[i-1][1]) {
            printf("UK Hat Size: %.2f\n", ukSize[i][0]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Unable to determine hat size.\n");
    }
}