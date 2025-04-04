#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Corrected condition
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Corrected printf statement
    }
    printf("\n");  // Print newline for better formatting
}

// int main() {
//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};
    
//     bubble(arr, n);
//     printarray(arr, n);
    
//     return 0;
// }
