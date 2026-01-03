#include <stdio.h>

int sumEvenWhile(int arr[], int size) {
    int sum = 0, i = 0;
    while (i < size) {
        if (arr[i] % 2 == 0) sum += arr[i];
        i++;
    }
    return sum;
}

int maxWhile(int arr[], int size) {
    int max = arr[0], i = 1;
    while (i < size) {
        if (arr[i] > max) max = arr[i];
        i++;
    }
    return max;
}

int searchWhile(int arr[], int size, int key) {
    int i = 0;
    while (i < size) {
        if (arr[i] == key) return i;
        i++;
    }
    return -1;
}

void sortWhile(int arr[], int size) {
    int i = 0, j;
    while (i < size - 1) {
        j = i + 1;
        while (j < size) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main() {
    int size, key;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Sum of even: %d\n", sumEvenWhile(arr, size));
    printf("Max element: %d\n", maxWhile(arr, size));
    printf("Enter element to search: ");
    scanf("%d", &key);
    int pos = searchWhile(arr, size, key);
    if (pos != -1) printf("Found at index %d\n", pos);
    else printf("Not found.\n");
    sortWhile(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}