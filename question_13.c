#include <stdio.h>

void countPNZ(int a[], int n, int *p, int *ne, int *z) {
    *p = *ne = *z = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) (*p)++;
        else if(a[i] < 0) (*ne)++;
        else (*z)++;
    }
}

int main() {
    int a[10], n, p, ne, z;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    countPNZ(a, n, &p, &ne, &z);
    printf("Positive=%d Negative=%d Zero=%d", p, ne, z);
    return 0;
}
