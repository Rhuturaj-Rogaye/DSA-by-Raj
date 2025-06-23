#include <iostream>
using namespace std;

int main() {
    int arr[10], n = 10, element, pos = -1;

    // Input array elements
    cout << "Enter 10 elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input element to delete
    cout << "Enter element to delete: ";
    cin >> element;

    // Find position of the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    // Delete element if found
    if (pos != -1) {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  // Reduce array size

        // Display modified array
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Element not found in the array.\n";
    }

    return 0;
}