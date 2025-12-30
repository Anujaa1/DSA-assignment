#include <stdio.h>

int main() {
    int a[10], n, x, found = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
        if(a[i] == x) found = 1;

    if(found) printf("Element Found");
    else printf("Not Found");
    return 0;
}
