#include <stdio.h>
#include <string.h>
int main() {
    char password[] = "aeiceg";
    char input[3][3];
    char diagonal[4];
    int i, j;
    printf("Enter 3x3 matrix of characters:\n");
    for (i = 0; i <3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &input[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        diagonal[i] = input[i][i];
        diagonal[3 + i] = input[3 - 1 - i][i];
    }
    diagonal[3 * 2] = '\0';
    if (strcmp(diagonal, password) == 0) {
        printf("Password verified successfully.\n");
    } else {
        printf("Incorrect password.\n");
    }

    return 0;
}
