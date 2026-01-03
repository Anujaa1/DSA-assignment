#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) if (arr[i] > max) max = arr[i];
    return max;
}

void countEvenOdd(int arr[], int size, int *even, int *odd) {
    *even = *odd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) (*even)++;
        else (*odd)++;
    }
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    int even, odd;
    printf("Sum: %d\n", sumArray(arr, size));
    printf("Max: %d\n", maxArray(arr, size));
    countEvenOdd(arr, size, &even, &odd);
    printf("Even: %d, Odd: %d\n", even, odd);
    return 0;
}