#include <stdio.h>

void sortAndUnique(int arr[], int size) {
    // Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Display unique
    printf("Unique sorted elements: ");
    printf("%d ", arr[0]);
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[i - 1])
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    sortAndUnique(arr, size);
    return 0;
}