#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // To prevent overflow

        // Check if the target is found
        if (arr[mid] == target) {
            return mid; // Return the index of the target
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int n, target;

    // Prompt the user to input the size of the array
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Prompt the user to input the target value
    cout << "Enter the target value to search: ";
    cin >> target;

    // Call binary search function
    int result = binarySearch(arr, target);

    // Display the result
    if (result != -1) {
        cout << "Target value " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Target value " << target << " not found in the array." << endl;
    }

    return 0;
}
