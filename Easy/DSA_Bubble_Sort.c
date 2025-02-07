// 3. Bubble Sort - Sort an Array in Ascending Order:


#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
        
        if (!swapped) {
            break;
        }
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Sample Input
    int arr[] = {29, 10, 14, 37, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform bubble sort
    bubbleSort(arr, size);

    // Print the sorted array
    printf("Sorted Array: ");
    printArray(arr, size);

    return 0;
}


// Sample Input:
// arr = [29, 10, 14, 37, 14]
// Sample Output:
// Sorted Array: [10, 14, 14, 29, 37]