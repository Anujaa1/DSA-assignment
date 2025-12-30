#include <stdio.h>

int gcd(int a, int b) {
    while(a != b) {
       if (a > b)
         a -= b;
       else
         b -= a;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("GCD = %d", gcd(a, b));
    return 0;
}
