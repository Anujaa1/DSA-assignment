#include <stdio.h>

void countEO(int a[], int n, int *e, int *o) {
    *e = *o = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) (*e)++;
        else (*o)++;
    }
}

int main() {
    int a[10], n, e, o;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    countEO(a, n, &e, &o);
    printf("Even=%d Odd=%d", e, o);
    return 0;
}
