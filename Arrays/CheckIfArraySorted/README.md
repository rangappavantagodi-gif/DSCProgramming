Check if an Array is Sorted in C
📌 Description

This C program checks whether a given array is sorted in ascending order.
It compares adjacent elements of the array to determine if the sorting condition is satisfied.

🛠️ Program Logic

Read the number of elements from the user

Read array elements

Traverse the array and compare each element with the next

If any element is greater than its next element, the array is not sorted

Otherwise, the array is sorted in ascending order

▶️ How to Compile and Run
gcc array_sorted.c -o array_sorted
./array_sorted

🧪 Sample Input
Enter number of elements: 5
Enter array elements:
2 4 6 8 10

✅ Sample Output
Array is sorted in ascending order.

❌ Sample Input (Unsorted Case)
Enter number of elements: 5
Enter array elements:
3 1 4 2 6

❌ Sample Output
Array is not sorted.
