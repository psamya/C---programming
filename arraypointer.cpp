#include <iostream>
#include <algorithm>  // For std::sort

void sortArray(int* arr, int length) {
    std::sort(arr, arr + length);  // Sorts the array in ascending order
}

void displayArray(int* arr, int length) {
    std::cout << "Array in ascending order: ";
    for (int i = 0; i < length; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int length;

    // Prompt the user to enter the length of the array
    std::cout << "Enter the length of the array: ";
    std::cin >> length;

    // Dynamically allocate memory for the array
    int* arr = new int[length];

    // Take input elements for the array
    std::cout << "Enter " << length << " elements:\n";
    for (int i = 0; i < length; ++i) {
        std::cin >> *(arr + i);
    }

    // Sort the array
    sortArray(arr, length);

    // Display the sorted array
    displayArray(arr, length);

    // Free the allocated memory
    delete[] arr;

    return 0;
}

