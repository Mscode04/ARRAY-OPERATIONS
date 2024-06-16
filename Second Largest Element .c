#include <stdio.h>

int secondLargest(int arr[], int n) {
    int first, second;
    first = second = -2147483648; // Smallest value for int

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int secondLargestElement = secondLargest(arr, n);
    printf("The second largest element is: %d\n", secondLargestElement);

    return 0;
}
