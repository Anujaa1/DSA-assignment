#include <stdio.h>

float average(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return (float)sum / n;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Average = %.2f", average(a, n));
    return 0;
}
