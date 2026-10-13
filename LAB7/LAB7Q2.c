#include <stdio.h>

int main() {
    float marks[10], sum = 0, average, bonus;
    int i, above_average = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);

        while (marks[i] < 0 || marks[i] > 20) {
            printf("Invalid marks! Enter marks between 0 and 20: ");
            scanf("%f", &marks[i]);
        }
    }

    printf("\nStudent Marks and Remarks:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18) {
            printf("Excellent\n");
        } else if (marks[i] >= 14) {
            printf("Good\n");
        } else if (marks[i] >= 10) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }

        sum = sum + marks[i];
    }

    average = sum / 10;

    printf("\nClass Average: %.2f\n", average);

    for (i = 0; i < 10; i++) {
        if (marks[i] > average) {
            above_average++;
        }
    }

    printf("Students Above Average: %d\n", above_average);

    for (i = 0; i < 10; i++) {
        bonus = marks[i] + 1.5;

        if (bonus > 20) {
            marks[i] = 20;
        } else {
            marks[i] = bonus;
        }
    }

    printf("\nRevised Report After Bonus Marks:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }

    return 0;
}
