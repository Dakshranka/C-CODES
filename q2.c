#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, whitespace_count = 0, special_count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            uppercase_count++;
            printf("%c - Uppercase Alphabet\n", str[i]);
        } else if (islower(str[i])) {
            lowercase_count++;
            printf("%c - Lowercase Alphabet\n", str[i]);
        } else if (isdigit(str[i])) {
            digit_count++;
            printf("%c - Digit\n", str[i]);
        } else if (isspace(str[i])) {
            whitespace_count++;
            printf("%c - Whitespace\n", str[i]);
        } else {
            special_count++;
            printf("%c - Special Symbol\n", str[i]);
        }
    }
    printf("Uppercase Alphabet count: %d\n", uppercase_count);
    printf("Lowercase Alphabet count: %d\n", lowercase_count);
    printf("Digit count: %d\n", digit_count);
    printf("Whitespace count: %d\n", whitespace_count);
    printf("Special Symbol count: %d\n", special_count);
    return 0;
}
