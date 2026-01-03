#include <stdio.h>

void deleteElement(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int size, pos;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Enter position to delete (0-index): ");
    scanf("%d", &pos);
    deleteElement(arr, &size, pos);
    printf("Modified array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}