#include <stdio.h>

double factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    double sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += factorial(i) / i;
    }
    printf("The sum of the series is %.2lf\n", sum);
    return 0;
}
