#include <iostream>

// Function to print array with square brackets
void print_array(int arr[], int size) {
    std::cout << "[";
    for (int i = 0; i < size; ++i) { //As long as i is less than the array size, the loop continues / makes sure i does go over the arrays size
        std::cout << arr[i];
        // Print comma and space for elements other than the last one
        if (i < size - 1) { // -1 because arrays start from 0 
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 5;

    print_array(numbers, size); // Call the function to print the array

    return 0;
}