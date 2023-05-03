#include <stdio.h>

int main() {
    int a, b, c;
    int acute = 0, right = 0, obtuse = 0, wrong = 0;
    for (int i = 1; i <= 3; i++) {
        printf("Enter the length of side %d: ", i);
        if (scanf("%d", &a) != 1 || a <= 0) {
            printf("Wrong Entry try again\n");
            i--;
            continue;
        }
        printf("Enter the length of side %d: ", i+1);
        if (scanf("%d", &b) != 1 || b <= 0) {
            printf("Wrong Entry try again\n");
            i--;
            continue;
        }
        printf("Enter the length of side %d: ", i+2);
        if (scanf("%d", &c) != 1 || c <= 0) {
            printf("Wrong Entry try again\n");
            i--;
            continue;
        }

        if (a + b <= c || a + c <= b || b + c <= a) {
            printf("Wrong Entry try again\n");
            i--;
            continue;
        }
        if (a*a + b*b > c*c) {
            acute++;
        } else if (a*a + b*b == c*c) {
            right++;
        } else {
            obtuse++;
        }
    }
    printf("Acute Angled Triangle: %d\n", acute);
    printf("Right Angled Triangle: %d\n", right);
    printf("Obtuse Angled Triangle: %d\n", obtuse);
    printf("Wrong Entries: %d\n", wrong);
    return 0;
}
