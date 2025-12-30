#include <stdio.h>

void delete(int a[], int *n, int pos) {
    for(int i = pos; i < *n-1; i++)
        a[i] = a[i+1];
    (*n)--;
}

int main() {
    int a[10], n, pos;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &pos);
    delete(a, &n, pos);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
