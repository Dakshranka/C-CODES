#include <stdio.h>
int main() {
    int chennai_temps[7];
    int delhi_temps[7];
    int haveri_temps[7];
    int gangtok_temps[7];
    int i;
    printf("Enter the temperature for each day in Chennai:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &chennai_temps[i]);
        if (chennai_temps[i] < 28 || chennai_temps[i] > 33) {
            printf("Invalid temperature for Chennai. Please enter again.\n");
            i--;
        }
    }
    for (i = 0; i <7; i++) {
        delhi_temps[i] = chennai_temps[i] - 8;
        haveri_temps[i] = chennai_temps[i] + 5;
    }
    for (i = 0; i < 7; i++) {
        gangtok_temps[i] = haveri_temps[i] - delhi_temps[i];
    }
    printf("Temperature for each day in Gangtok:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", gangtok_temps[i]);
    }
    printf("\n");

    return 0;
}
