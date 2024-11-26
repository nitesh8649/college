#include <stdio.h>

struct Student {
    int rollNo;
    int subject1;
    int subject2;
    int subject3;
    int totalMarks;
};

int main() {
    struct Student students[10];
    int highestSubject1 = 0, highestSubject2 = 0, highestSubject3 = 0;
    int highestRollNoSubject1, highestRollNoSubject2, highestRollNoSubject3;
    int highestTotalMarks = 0, highestRollNoTotal;
    
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks in Subject1: ");
        scanf("%d", &students[i].subject1);
        printf("Marks in Subject2: ");
        scanf("%d", &students[i].subject2);
        printf("Marks in Subject3: ");
        scanf("%d", &students[i].subject3);
        
        students[i].totalMarks = students[i].subject1 + students[i].subject2 + students[i].subject3;
        
        if (students[i].subject1 > highestSubject1) {
            highestSubject1 = students[i].subject1;
            highestRollNoSubject1 = students[i].rollNo;
        }
        
        if (students[i].subject2 > highestSubject2) {
            highestSubject2 = students[i].subject2;
            highestRollNoSubject2 = students[i].rollNo;
        }
        
        if (students[i].subject3 > highestSubject3) {
            highestSubject3 = students[i].subject3;
            highestRollNoSubject3 = students[i].rollNo;
        }
        
        if (students[i].totalMarks > highestTotalMarks) {
            highestTotalMarks = students[i].totalMarks;
            highestRollNoTotal = students[i].rollNo;
        }
    }

    printf("\nTotal marks obtained by each student:\n");
    for (int i = 0; i < 10; i++) {
        printf("Roll No: %d, Total Marks: %d\n", students[i].rollNo, students[i].totalMarks);
    }
    
    printf("\nHighest marks in Subject1: %d (Roll No: %d)\n", highestSubject1, highestRollNoSubject1);
    printf("Highest marks in Subject2: %d (Roll No: %d)\n", highestSubject2, highestRollNoSubject2);
    printf("Highest marks in Subject3: %d (Roll No: %d)\n", highestSubject3, highestRollNoSubject3);

    printf("\nStudent with highest total marks: Roll No: %d, Total Marks: %d\n", highestRollNoTotal, highestTotalMarks);
    
    return 0;
}