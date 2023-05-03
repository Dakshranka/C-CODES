#include <stdio.h>
#include <string.h>

int revString(char *str);

int main() {
    char str[100];
    printf("Enter a sentence with two words: ");
    fgets(str, 100, stdin);

    int len = revString(str);
    printf("Length of the string: %d\n", len);

    if (len < 20) {
        return len;
    } else {
        return sizeof(str);
    }
}
int revString(char *str) {
    char firstWord[50], secondWord[50];
    sscanf(str, "%s %s", firstWord, secondWord);
    firstWord[0] = toupper(firstWord[0]);
    for (int i = 1; i < strlen(firstWord); i++) {
        firstWord[i] = tolower(firstWord[i]);
    }
    for (int i = 0; i < strlen(secondWord); i++) {
        secondWord[i] = toupper(secondWord[i]);
    }
    printf("%s %s\n", firstWord, secondWord);
    printf("%d\n", strlen(str));
    return strlen(str);
}
