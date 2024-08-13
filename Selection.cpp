#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Selection_Sort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        swap(A[i], A[minIndex]);
    }
}

void printArray(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    Selection_Sort(A, n);
    cout << "Sorted Array: ";
    printArray(A, n);
    return 0;
}
