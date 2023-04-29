#include <stdio.h>
int main() {
    int original_marks[25], revised_marks[25], birth_months[25], i;
    float original_marks_avg = 0, revised_marks_avg = 0;
    printf("Enter the original marks and birth month (as a number from 1 to 12) for %d students:\n", CLASS_SIZE);
    for (i = 0; i < 25; i++) {
        printf("Student %d: ", i+1);
        scanf("%d %d", &original_marks[i], &birth_months[i]);
    }
    for (i = 0; i < 25; i++) {
        revised_marks[i] = original_marks[i] + birth_months[i];
        original_marks_avg += original_marks[i];
        revised_marks_avg += revised_marks[i];
    }
    original_marks_avg /= 25;
    revised_marks_avg /= 25;
    if (revised_marks_avg - original_marks_avg >= 5) {
        printf("Can implement - Significant increase in class average\n");
    } else {
        printf("Need not implement - No significant increase in class average\n");
    }

    return 0;
}
