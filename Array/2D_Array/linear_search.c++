#include <iostream>
using namespace std;

// Function to perform Linear Search
int found(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i; // Return the index if found
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[] = {1, 3, 6, 8, 9}; // Sample array
    int size = 5;
    int target;

    cout << "Enter the target element: ";
    cin >> target;

    int result = found(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
