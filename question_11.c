#include <stdio.h>

int sumDivisibleBy3(int arr[], int size) {
    int sum = 0, i = 0;
    while (i < size) {
        if (arr[i] % 3 == 0)
            sum += arr[i];
        i++;
    }
    return sum;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Sum of elements divisible by 3: %d\n", sumDivisibleBy3(arr, size));
    return 0;
}