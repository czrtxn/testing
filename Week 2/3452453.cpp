// BubbleSort.cpp
// Simple Bubble Sort demonstration program
// Language: C++ | IDE: Visual Studio (Console Application)

#include <iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int size) {
    for (int pass = 0; pass < size - 1; pass++) {
        bool swapped = false;

        for (int i = 0; i < size - pass - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap arr[i] and arr[i+1]
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        // If no elements were swapped, array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to display the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int numbers[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(numbers) / sizeof(numbers[0]);

    cout << "===== BUBBLE SORT PROGRAM =====" << endl << endl;

    cout << "Original array: ";
    printArray(numbers, n);

    bubbleSort(numbers, n);

    cout << "Sorted array:   ";
    printArray(numbers, n);

    cout << endl << "Sorting complete!" << endl;

    return 0;
}