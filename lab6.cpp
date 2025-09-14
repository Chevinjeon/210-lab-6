// COMSC-210 | Lab Assignment
// Author: Chevin Jeon
// IDE: g++ (C++11)
//
// Program Purpose:
//   Demonstrate dynamic memory allocation with a double array.
//   Populate the array with user input, print its contents,
//   and calculate its sum using pointer notation only.

#include <iostream>
using namespace std;

// Function to enter user data into the dynamic array
void enterArrayData(double* arr, const int SIZE) {
    cout << "Data entry for the array:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);   // pointer notation
    }

    cout << "Data entry complete." << endl;
}

// Function to output array contents on one line
void outputArrayData(double* arr, const int SIZE) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";   // pointer notation
    }
    cout << endl;
}

// Function to calculate the sum of array values
double sumArray(double* arr, const int SIZE) {
    double sum = 0.0;

    for (int i = 0; i < SIZE; i++) {
        sum += *(arr + i);   // pointer notation
    }

    return sum;  // return result (no printing here)
}

int main() {
    // Constant for array size
    const int SIZE = 5;

    // Allocate dynamic memory for the array
    double* myArray = new double[SIZE];

    // Call functions
    enterArrayData(myArray, SIZE);
    outputArrayData(myArray, SIZE);

    double result = sumArray(myArray, SIZE);
    cout << "Sum of values: " << result << endl;

    // Release allocated memory
    delete[] myArray;

    return 0;
}