#include <stdio.h>

int secondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array too small for second largest.\n");
        return -1;
    }
    int first = arr[0], second = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -1) {
        printf("All elements are equal.\n");
    }
    return second;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    int sec = secondLargest(arr, size);
    if (sec != -1)
        printf("Second largest: %d\n", sec);
    return 0;
}