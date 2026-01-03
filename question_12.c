#include <stdio.h>

struct Counts {
    int even;
    int odd;
};

struct Counts countEvenOdd(int arr[], int size) {
    struct Counts c = {0, 0};
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            c.even++;
        else
            c.odd++;
    }
    return c;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    struct Counts c = countEvenOdd(arr, size);
    printf("Even: %d, Odd: %d\n", c.even, c.odd);
    return 0;
}