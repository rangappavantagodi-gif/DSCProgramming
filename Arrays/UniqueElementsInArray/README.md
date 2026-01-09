📌 Program: Print Unique Elements in an Array (C)
📖 Description

This program reads an array of integers from the user and prints all unique elements.
An element is considered unique if it appears only once in the array.

🎯 Objective

Accept n elements into an array

Count the occurrence of each element

Display elements that occur exactly one time

🧠 Algorithm

Read the number of elements n

Read n array elements

For each element in the array:

Initialize a counter to zero

Compare it with every other element

Increment the counter if a match is found

If the counter value is 1, print the element

Repeat until all elements are checked

🧪 Sample Input
Enter number of elements: 7
Enter array elements:
1 2 2 3 4 3 5

✅ Sample Output
Unique elements in the array:
1 4 5

⏱️ Time Complexity

O(n²) (due to nested loops)