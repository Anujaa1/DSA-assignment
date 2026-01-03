#include <stdio.h>

int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    int evens = countEven(arr, size);
    if (evens > 0)
        printf("Even numbers count: %d\n", evens);
    else
        printf("No even numbers found.\n");
    return 0;
}