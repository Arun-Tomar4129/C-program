#include <iostream>
using namespace std;

// Function to search an element and return its index
int searchElement(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index of found element
        }
    }
    return -1; // If element is not found
}

int main() {
    int n, key;
    
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int index = searchElement(arr, n, key);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array!" << endl;
    }

    return 0;
}
