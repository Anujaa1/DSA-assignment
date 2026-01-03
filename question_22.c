#include <stdio.h>

int reverseAndMax(int arr[], int size) {
    // Reverse
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    // Find max
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
    int max = reverseAndMax(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\nMaximum: %d\n", max);
    return 0;
}