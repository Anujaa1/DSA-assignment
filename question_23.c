#include <stdio.h>

void sort(int a[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
