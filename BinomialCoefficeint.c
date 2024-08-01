#include <stdio.h>

int power(int a, int n) {
    if (n == 0) return 1;
    int temp = power(a, n / 2);
    if (n % 2 == 0) {
        return temp * temp;
    } else {
        return a * temp * temp;
    }
}

int main() {
    int a, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &n);
    int result = power(a, n);
    printf("%d^%d = %d\n", a, n, result);
    return 0;
}

