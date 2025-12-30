#include <stdio.h>

int sum(int a[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) s += a[i];
    return s;
}
int max(int a[], int n) {
    int m = a[0];
    for(int i = 1; i < n; i++) if(a[i] > m) m = a[i];
    return m;
}
void evenOdd(int a[], int n) {
    int e = 0, o = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0) e++; else o++;
    printf("Even=%d Odd=%d\n", e, o);
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Sum=%d\n", sum(a,n));
    printf("Max=%d\n", max(a,n));
    evenOdd(a,n);
    return 0;
}
