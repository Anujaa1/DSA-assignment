#include <stdio.h>

void sortUnique(int a[], int n) {
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    printf("%d ", a[0]);
    for(int i = 1; i < n; i++)
        if(a[i] != a[i-1])
            printf("%d ", a[i]);
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    sortUnique(a, n);
    return 0;
}
