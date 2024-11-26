#include <stdio.h>

struct Student {
    int rollNo;
    char name[100];
    int marks;
};

void displayStudents(struct Student students[], int n);

int main() {
    struct Student students[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar();
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\nStudents with marks greater than 500:\n");
    displayStudents(students, 10);

    return 0;
}

void displayStudents(struct Student students[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Name: %s", students[i].name);
            printf("Marks: %d\n\n", students[i].marks);
        }
    }
}