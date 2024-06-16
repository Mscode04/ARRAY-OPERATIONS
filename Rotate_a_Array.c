// Rotate an Array to the Right by k Steps
#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    int temp[100];
    k = k % n; // Handle cases where k is greater than n

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, k;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}