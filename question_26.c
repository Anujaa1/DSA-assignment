#include <stdio.h>

void replaceNegative(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            arr[i] = 0;
    }
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    replaceNegative(arr, size);
    printf("Modified array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}