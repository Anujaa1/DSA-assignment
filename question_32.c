#include <stdio.h>

int countEvenWhile(int arr[], int size) {
    int count = 0, i = 0;
    while (i < size) {
        if (arr[i] % 2 == 0) count++;
        i++;
    }
    return count;
}

void replaceOddWithZero(int arr[], int size) {
    int i = 0;
    while (i < size) {
        if (arr[i] % 2 != 0) arr[i] = 0;
        i++;
    }
}

void displayArray(int arr[], int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
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
    printf("Even count: %d\n", countEvenWhile(arr, size));
    replaceOddWithZero(arr, size);
    printf("Modified array: ");
    displayArray(arr, size);
    return 0;
}