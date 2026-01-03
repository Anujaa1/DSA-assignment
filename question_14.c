#include <stdio.h>

int isPresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return 1;
    }
    return 0;
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
    if (isPresent(arr, size, key))
        printf("Element found.\n");
    else
        printf("Element not found.\n");
    return 0;
}