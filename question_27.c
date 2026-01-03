#include <stdio.h>

void swapFirstLast(int arr[], int size) {
    if (size > 1) {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;
    }
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    swapFirstLast(arr, size);
    printf("Modified array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}