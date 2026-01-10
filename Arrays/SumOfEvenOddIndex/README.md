📌 Sum of Even-Index and Odd-Index Elements in an Array (C)
📖 Description

This program calculates the sum of elements present at even indices and the sum of elements present at odd indices in a given array.
Array indexing starts from 0, so index 0 is considered an even index.

🎯 Objective

Read the size of an array from the user

Accept array elements

Compute:

Sum of elements at even indices

Sum of elements at odd indices

Display both sums separately

🧠 Logic Used

Traverse the array using a loop

Use the index value to determine:

Even index → index % 2 == 0

Odd index → index % 2 != 0

Add elements to their respective sums

🛠 Algorithm

Start

Read the number of elements n

Declare an array of size n

Read array elements

Initialize evenSum and oddSum to 0

Loop through the array:

If index is even, add element to evenSum

Else, add element to oddSum

Print both sums

Stop

🧪 Sample Input
Enter the size of array: 5
Enter array elements: 1 2 3 4 5

📤 Sample Output
Sum of even-index elements: 9
Sum of odd-index elements: 6
