#include <stdio.h>

int sumEven(int a[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0) s += a[i];
    return s;
}

int prodOdd(int a[], int n) {
    int p = 1;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 != 0) p *= a[i];
    return p;
}

int main() {
    int a[10], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Sum Even=%d\n", sumEven(a,n));
    printf("Product Odd=%d", prodOdd(a,n));
    return 0;
}
if (hasOdd) {
  return prod;
} else {
  return 0;
}
Breaking it do