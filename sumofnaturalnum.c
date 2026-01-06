#include <stdio.h>

int natural(int n) {
    int sum = 0, i;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n, result;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    result = natural(n);
    printf("Sum of first %d natural numbers = %d\n", n, result);

    return 0;
}
