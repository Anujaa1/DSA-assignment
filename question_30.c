#include <stdio.h>

int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) if (arr[i] % 2 == 0) sum += arr[i];
    return sum;
}

int productOdd(int arr[], int size) {
    int prod = 1, hasOdd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            prod *= arr[i];
            hasOdd = 1;
        }
    }
    return hasOdd ? prod : 0;
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    printf("Sum of even: %d\n", sumEven(arr, size));
    printf("Product of odd: %d\n", productOdd(arr, size));
    return 0;
}