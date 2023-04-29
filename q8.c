#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, freq[26] = {0}, i, rep_index = -1, non_rep_index = -1;

    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("Length of the string is: %d\n", len);
    for (i = 0; i < len; i++) {
        freq[str[i] - 'A']++;
    }
    printf("Word frequency is: %d\n", len);
    for (i = 0; i < len; i++) {
        if (freq[str[i] - 'A'] == 1) {
            non_rep_index = i;
            break;
        } else if (freq[str[i] - 'A'] > 1 && rep_index == -1) {
            rep_index = i;
        }
    }
    if (rep_index == -1) {
        printf("No repeated characters found in the string.\n");
    } else {
        printf("First repeated character is: %c\n", str[rep_index]);
    }

    if (non_rep_index == -1) {
        printf("No non-repeated characters found in the string.\n");
    } else {
        printf("First non-repeated character is: %c\n", str[non_rep_index]);
    }

    return 0;
}
