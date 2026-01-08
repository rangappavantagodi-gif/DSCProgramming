Merge Two Arrays in C
📌 Description

This program demonstrates how to merge two integer arrays into a third array in the C programming language.
The elements of the first array are copied first, followed by the elements of the second array, preserving their original order.

🎯 Objective

Read two arrays from the user

Merge them into a third array

Display the merged array

🧠 Algorithm

Read the size of the first array (n1) and second array (n2).

Declare three arrays:

arr1 of size n1

arr2 of size n2

arr3 of size n1 + n2

Read elements of the first array and copy them into arr3.

Read elements of the second array and append them to arr3.

Display the merged array.

📥 Input

Size of the first array

Size of the second array

Elements of the first array

Elements of the second array

📤 Output

A single merged array containing all elements of both arrays

🧪 Sample Input
Enter size of first array: 3
Enter size of second array: 2
Enter elements of first array:
1 2 3
Enter elements of second array:
4 5

✅ Sample Output
Merged array:
1 2 3 4 5

⚙️ Time & Space Complexity

Time Complexity: O(n1 + n2)

Space Complexity: O(n1 + n2)
