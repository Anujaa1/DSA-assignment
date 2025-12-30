#include <stdio.h>

void readdisplay(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n,arr[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    readdisplay(arr, n);
    return 0;
}