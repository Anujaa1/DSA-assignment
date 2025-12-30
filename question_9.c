#include <stdio.h>

int sumArray(int a[], int n) {
    int sum = 0, i = 0;
    while(i < n) {
        sum += a[i];
        i++;
    }
    return sum;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Sum = %d", sumArray(a, n));
    return 0;
}
