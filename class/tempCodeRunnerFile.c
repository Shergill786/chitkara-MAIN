#include <stdio.h>
int findTopMarks(int marks[], int n) {
    int top = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > top) {
            top = marks[i];
        }
    }
    return top;
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    int topMarks = findTopMarks(marks, n);
    printf("Top marks: %d\n", topMarks);
    return 0;
}
