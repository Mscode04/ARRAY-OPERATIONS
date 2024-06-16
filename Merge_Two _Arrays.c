#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int merged[], int n1, int n2) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of the first array (sorted):\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of the second array (sorted):\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeArrays(arr1, arr2, merged, n1, n2);

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
