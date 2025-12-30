#include <stdio.h>

int max(int a[], int n) {
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > m) m = a[i];
    return m;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    if(n == 1) {
        printf("Only one element");
        return 0;
    }
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Max = %d", max(a, n));
    return 0;
}
