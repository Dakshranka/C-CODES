#include <stdio.h>
#include<math.h>
int power(int x, int n);
int main() {
    int x, n, result;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n (<=5): ");
    scanf("%d", &n);
    result = power(x, n);
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}
int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else if (n % 2 == 0) {
        int temp = power(x, n/2);
        return temp * temp;
    } else {
        return x * power(x, n-1);
    }
}
