# Binary Search in C

## Overview
This project implements the **Binary Search algorithm in C** using an iterative approach.  
Binary search is an efficient searching technique that works on a **sorted array** by repeatedly dividing the search space into two halves.

---

## Features
- Iterative binary search implementation
- Clear and readable C code
- Handles invalid array size input
- Suitable for learning, interviews, and academic use

---

## Algorithm
Binary search follows the **divide-and-conquer** approach:

1. Initialize `low` to 0 and `high` to `n - 1`
2. Calculate the middle index
3. Compare the middle element with the search key
4. If equal, the element is found
5. If smaller, search the right half
6. If larger, search the left half
7. Repeat until the element is found or the search space is empty

**Note:** The array must be sorted in ascending order.

---

## Function Description

### `binarySearch(int arr[], int n, int element)`
- Searches for an element in a sorted array
- Returns the index of the element if found
- Returns `-1` if the element is not present

---

## Sample Input and Output

### Input
Enter the number of elements in array: 5
Enter 5 sorted elements:
10 20 30 40 50
Enter the element to search:
30

### Output
Element found at index 2

## Requirements
- C Compiler (GCC, Clang, or equivalent)
- Standard C Library

---

## How to Compile and Run

```bash
gcc binary_search.c -o binary_search
./binary_search

Assumptions
Input array is sorted in ascending order
Array indexing starts from 0