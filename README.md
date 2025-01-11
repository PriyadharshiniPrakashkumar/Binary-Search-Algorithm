Binary Search Program in C++
Description
This program demonstrates the implementation of the binary search algorithm in C++. It efficiently searches for a target value in a sorted array by repeatedly dividing the search interval in half.

How It Works
The user is prompted to input:
The size of the array.
The sorted array elements.
The target value to search for.
The program uses the binary search algorithm to find the target in the array.
If the target is found, its index is displayed. Otherwise, a message indicating that the target is not found is shown.
Features
Prevents overflow by calculating the middle index as left + (right - left) / 2.
Handles sorted integer arrays.
Outputs the result with appropriate messages.
How to Run the Program
Compile the program using any C++ compiler:
bash
Copy code
g++ binary_search.cpp -o binary_search
Run the compiled program:
bash
Copy code
./binary_search
Example Usage
Input:

mathematica
Copy code
Enter the number of elements in the sorted array: 5
Enter 5 sorted elements: 1 3 5 7 9
Enter the target value to search: 7
Output:

perl
Copy code
Target value 7 found at index 3.
Input:

mathematica
Copy code
Enter the number of elements in the sorted array: 5
Enter 5 sorted elements: 1 3 5 7 9
Enter the target value to search: 2
Output:

c
Copy code
Target value 2 not found in the array.
Binary Search Algorithm
Binary search is a fast algorithm with a time complexity of O(log n). It works by:

Comparing the target with the middle element of the array.
Narrowing down the search interval based on the comparison result:
If the target is smaller than the middle element, search the left half.
If the target is larger, search the right half.
Repeating this process until the target is found or the interval becomes empty.
Requirements
A C++ compiler (e.g., GCC, Clang, or Visual Studio).
The array must be sorted before using binary search.
