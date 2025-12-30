#include <stdio.h>

void reverse(int a[], int n) {
    int i = 0, j = n - 1, temp;
    while(i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++; j--;
    }
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    reverse(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
