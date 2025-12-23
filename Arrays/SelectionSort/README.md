Selection Sort in C
📌 Overview

This project demonstrates the implementation of the Selection Sort algorithm in the C programming language.
The program allows users to enter the number of elements and their values, sorts the array in ascending order using Selection Sort, and displays the array before and after sorting.

Selection Sort is a simple comparison-based sorting algorithm, mainly used for educational purposes and for understanding basic sorting concepts.

🛠️ Features

User-defined array size and elements

Implements Selection Sort algorithm

Displays array before and after sorting

Basic input validation

In-place sorting (no extra memory usage)

🧾 Algorithm Used: Selection Sort
Working Principle

Divide the array into two parts: sorted and unsorted.

Find the minimum element from the unsorted part.

Swap it with the first element of the unsorted part.

Move the boundary of the sorted part one position forward.

Repeat until the entire array is sorted.

▶️ How to Compile and Run
Compile
gcc selection_sort.c -o selection_sort

Run
./selection_sort

📊 Sample Input & Output

Input

Enter number of array elements:
5
Enter elements:
64 25 12 22 11


Output

Array before sorting:
64 25 12 22 11
Array after sorting:
11 12 22 25 64

⏱️ Time and Space Complexity
Case	Time Complexity
Best Case	O(n²)
Average Case	O(n²)
Worst Case	O(n²)

