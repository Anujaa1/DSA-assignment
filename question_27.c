#include <stdio.h>

void swap(int a[], int n) {
    int t = a[0];
    a[0] = a[n-1];
    a[n-1] = t;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    swap(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
