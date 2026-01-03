#include <stdio.h>

struct PNC {
    int pos, neg, zero;
};

struct PNC countPNZ(int arr[], int size) {
    struct PNC p = {0, 0, 0};
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            p.pos++;
        else if (arr[i] < 0)
            p.neg++;
        else
            p.zero++;
    }
    return p;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    struct PNC p = countPNZ(arr, size);
    printf("Positive: %d, Negative: %d, Zero: %d\n", p.pos, p.neg, p.zero);
    return 0;
}