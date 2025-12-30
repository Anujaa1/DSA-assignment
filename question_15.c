#include <stdio.h>

void search(int a[], int n, int x) {
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            printf("%d ", i);
}

int main() {
    int a[10], n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    search(a, n, x);
    return 0;
}
