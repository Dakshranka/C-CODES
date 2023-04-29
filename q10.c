#include <stdio.h>
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    int start_num, max_num, sum, lucky_num;
    printf("Enter a four-digit even number: ");
    scanf("%d", &start_num);
    if (start_num < 1000 || start_num > 9998 || start_num % 2 != 0) {
        printf("Error: Invalid input. Please enter a four-digit even number.\n");
        return 0;
    }
    max_num = 9998;
    sum = 0;
    for (int i = start_num; i <= max_num; i += 2) {
        sum += i;
    }
    while (sum > 9) {
        sum = sum_of_digits(sum);
    }
    if (sum % 2 != 0) {
        lucky_num = sum;
        printf("Lucky number is: %d\n", lucky_num);
    } else {
        printf("Sum of digits is even. Trying next even four-digit number...\n");
        main();
    }

    return 0;
}
