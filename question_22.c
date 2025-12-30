#include <stdio.h>

int reverseMax(int a[], int n) {
    int max = a[0];
    for(int i = 0; i < n/2; i++) {
        int t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = t;
    }
    for(int i = 0; i < n; i++)
        if(a[i] > max) max = a[i];
    return max;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int m = reverseMax(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nMax = %d", m);
    return 0;
}
