#include <stdio.h>

int main() {
    int a[10], n, i = 0, max, smax;
    scanf("%d", &n);
    if(n < 2) {
        printf("Not possible");
        return 0;
    }
    while(i < n) {
        scanf("%d", &a[i]);
        i++;
    }
    max = smax = -9999;
    i = 0;
    while(i < n) {
        if(a[i] > max) {
            smax = max;
            max = a[i];
        } else if(a[i] > smax && a[i] != max)
            smax = a[i];
        i++;
    }
    if(smax == -9999) printf("Not possible");
    else printf("Second largest = %d", smax);
    return 0;
}
