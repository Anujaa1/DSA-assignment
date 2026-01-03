#include <stdio.h>

int sumArrayWhile(int arr[], int size) {
    int sum = 0, i = 0;
    while (i < size) {
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
    printf("Sum: %d\n", sumArrayWhile(arr, size));
    return 0;
}