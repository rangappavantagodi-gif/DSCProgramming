Reverse an Array In-Place in C
📌 Description

This program demonstrates how to reverse the elements of a one-dimensional integer array without using an additional array. The reversal is performed in-place by swapping elements from the beginning and end of the array.

🎯 Objective

Reverse array elements using constant extra space

Understand in-place array manipulation

Practice basic loop and swapping logic in C

🧠 Approach

Read the number of elements and array values from the user

Use a loop that runs from the start of the array to the middle (n/2)

Swap the first and last elements, then move inward

Continue until the array is fully reversed

▶️ How to Build and Run

Use a standard C compiler such as GCC:

gcc reverse_array.c -o reverse_array
./reverse_array
🧪 Example Input
5
1 2 3 4 5
📤 Example Output
Reversed array:
5 4 3 2 1
⏱️ Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1) (no extra array used)

✅ Key Concepts Used

One-dimensional arrays

In-place algorithm

Element swapping using a temporary variable

Loop control and indexing

📚 Use Case

This approach is commonly used in:

Embedded systems

Memory-constrained environments

Algorithm and data structure fundamentals