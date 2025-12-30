#include <stdio.h>

void readDisplay(int a[], int n) {
    int i = 0;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    while(i < n) {
        scanf("%d", &a[i]);
        i++;
    }
    i = 0;
    while(i < n) {
        printf("%d ", a[i]);
        i++;
    }
}

int main() {
    int n,a[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    readDisplay(a, n);
    return 0;
}
