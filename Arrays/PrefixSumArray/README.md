# Prefix Sum Array in C

## Aim
To write a C program to compute and display the **prefix sum array** for a given set of integers.

---

## Description
A **prefix sum array** is an auxiliary array where each element at index `i` contains the sum of all elements from index `0` to `i` of the original array.

This technique is widely used to optimize range-sum queries and cumulative calculations.

---

## Algorithm
1. Read the number of elements `n`.
2. Read `n` elements into an array.
3. Initialize the first element of the prefix array with the first element of the input array.
4. For each subsequent element, compute: 
    prefix[i] = prefix[i - 1] + arr[i]
5. Display the prefix sum array.

## Input
- An integer `n` representing the number of elements.
- `n` integer values as array elements.

## Output
- The prefix sum array corresponding to the input array.

## Example

### Input
Enter number of elements: 5
Enter array elements: 2 4 6 8 10

### Output
Prefix sum array:
2 6 12 20 30
