#include <iostream>

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;  // Assume the minimum is the first unsorted element
        for (int j = i + 1; j < n; ++j) {
            // Find the index of the minimum element
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        std::swap(arr[i], arr[minIndex]);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    // Prompt user to enter the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Input elements
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}