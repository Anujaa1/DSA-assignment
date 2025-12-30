#include <stdio.h>

int sumDiv3(int a[], int n) {
    int sum = 0, i = 0;
    while(i < n) {
        if(a[i] % 3 == 0)
            sum += a[i];
        i++;
    }
    return sum;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Sum = %d", sumDiv3(a, n));
    return 0;
}
