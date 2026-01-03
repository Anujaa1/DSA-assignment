#include <stdio.h>

void searchAll(int arr[], int size, int key) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }
    if (!found)
        printf("Element not found.\n");
}

int main() {
    int size, key;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    searchAll(arr, size, key);
    return 0;
}