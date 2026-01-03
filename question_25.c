#include <stdio.h>

void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int size, key;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    sortAscending(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    int index = binarySearch(arr, size, key);
    if (index != -1)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found.\n");
    return 0;
}