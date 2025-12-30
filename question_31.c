#include <stdio.h>

int main() {
    int a[10], n, i = 0, x, max, sum = 0;
    scanf("%d", &n);
    while(i < n) scanf("%d", &a[i++]);

    i = 0;
    while(i < n) {
        if(a[i] % 2 == 0) sum += a[i];
        i++;
    }
    printf("Sum Even=%d\n", sum);

    max = a[0];
    i = 1;
    while(i < n) {
        if(a[i] > max) max = a[i];
        i++;
    }
    printf("Max=%d\n", max);

    scanf("%d", &x);
    i = 0;
    while(i < n && a[i] != x) i++;
    if(i < n) printf("Found\n");
    else printf("Not Found\n");

    for(i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
