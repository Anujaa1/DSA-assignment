
#include <stdio.h>

int power(int a, int n) {
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= a;
    return result;
}

int main() {
    int a, n;
    printf("Enter base and exponent (separated by space): ");
    scanf("%d%d", &a, &n);
    printf("Result = %d\n", power(a, n));
    return 0;
}