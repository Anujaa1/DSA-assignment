#include <stdio.h>

int countEven(int a[], int n) {
    int c = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0) c++;
    return c;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int c = countEven(a, n);
    if(c == 0) printf("No even number");
    else printf("Even count = %d", c);
    return 0;
}
