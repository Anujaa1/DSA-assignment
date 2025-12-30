#include <stdio.h>

int sortSearch(int a[], int n, int x) {
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    for(int i = 0; i < n; i++)
        if(a[i] == x) return i;
    return -1;
}

int main() {
    int a[10], n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int pos = sortSearch(a, n, x);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    if(pos != -1) printf("\nFound at %d", pos);
    else printf("\nNot found");
    return 0;
}
