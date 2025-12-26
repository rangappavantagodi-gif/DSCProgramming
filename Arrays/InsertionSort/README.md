Insertion Sort in C
📌 Overview

This project demonstrates the implementation of the Insertion Sort algorithm in C.
Insertion Sort is a simple and efficient comparison-based sorting technique, suitable for small datasets and nearly sorted arrays.

The program:

Accepts array size and elements from the user

Sorts the array using Insertion Sort

Displays the array before and after sorting

🧠 Algorithm Description

Insertion Sort works by dividing the array into:

a sorted portion

an unsorted portion

Each element from the unsorted portion is picked and placed at the correct position in the sorted portion, similar to sorting cards in hand.

⚙️ Features

User input–driven array size and elements

In-place sorting (no extra memory used)

Clear and modular function structure

Input validation for array size

🛠️ How to Compile and Run
Compile
gcc insertion_sort.c -o insertion_sort

Run
./insertion_sort

📥 Input Format

Integer n → number of elements

n integers → array elements

📤 Output Format

Displays the array before sorting

Displays the array after sorting

🧪 Sample Input and Output
--Program to sort array using insersion sort--
Enter number of array elements:
5
Enter 5 array elements:
Enter element 1: 9
Enter element 2: 3
Enter element 3: 7
Enter element 4: 1
Enter element 5: 4

Sample Output
Array before sorting:
9 3 7 1 4

Array after sorting:
1 3 4 7 9

⏱️ Time and Space Complexity
Case	Time Complexity
Best Case (Already Sorted)	O(n)
Average Case	O(n²)
Worst Case (Reverse Order)	O(n²)

Space Complexity: O(1) (In-place)

Stability: Stable sorting algorithm ✅



