#include <stdio.h>

int findMaxSingleCheck(int arr[], int size) {
    if (size == 1) {
        printf("Array has only one element.\n");
        return arr[0];
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Maximum: %d\n", findMaxSingleCheck(arr, size));
    return 0;
}