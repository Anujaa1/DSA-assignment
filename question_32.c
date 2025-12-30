#include <stdio.h>

int countEven(int a[], int n) {
    int c = 0, i = 0;
    while(i < n) {
        if(a[i] % 2 == 0) c++;
        i++;
    }
    return c;
}

void replaceOdd(int a[], int n) {
    int i = 0;
    while(i < n) {
        if(a[i] % 2 != 0) a[i] = 0;
        i++;
    }
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Even Count=%d\n", countEven(a,n));
    replaceOdd(a,n);

    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
