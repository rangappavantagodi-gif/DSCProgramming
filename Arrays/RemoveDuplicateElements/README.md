🔹 Remove Duplicate Elements from an Array in C
📌 Program Description

This C program removes duplicate elements from an array entered by the user and displays the array containing only unique elements.

The program uses a nested loop approach to compare elements and remove duplicates by shifting elements to the left when a duplicate is found.

🎯 Objective

Accept n elements from the user

Identify duplicate values

Remove duplicates without using extra memory

Display the updated array with unique elements

🧠 Algorithm

Read the number of elements n.

Store elements in an array.

Traverse the array using two loops:

Compare each element with the remaining elements.

If a duplicate is found:

Shift elements one position to the left.

Decrease the size of the array.

Print the updated array.

💻 Sample Input
Enter number of elements: 7
Enter elements:
1 2 2 3 4 4 5

✅ Sample Output
Array after removing duplicates:
1 2 3 4 5

⏱ Time and Space Complexity

Time Complexity: O(n²)

Space Complexity: O(1)

🛠 Compilation & Execution
gcc filename.c -o output
./output
