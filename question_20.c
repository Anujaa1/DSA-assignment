#include <stdio.h>

void reverse(int a[], int n) {
    int b[10];
    for(int i = 0; i < n; i++)
        b[i] = a[n - 1 - i];
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    reverse(a, n);
    return 0;
}
