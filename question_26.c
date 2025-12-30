#include <stdio.h>

void replace(int a[], int n) {
    for(int i = 0; i < n; i++)
        if(a[i] < 0) a[i] = 0;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    replace(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
