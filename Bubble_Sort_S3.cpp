#include <iostream>

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare and swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no elements were swapped in the inner loop, the array is sorted
        if (!swapped)
            break;
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

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}