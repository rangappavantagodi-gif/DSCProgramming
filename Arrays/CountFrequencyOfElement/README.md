Count Frequency of Each Element in an Array (C Program)
📌 Description

This program counts the frequency of each unique element in an integer array entered by the user.
It uses a nested loop approach and an auxiliary frequency array to track duplicate elements.

🎯 Objective

Read n elements into an array.

Count how many times each element appears.

Display each element along with its frequency.

Avoid printing duplicate elements multiple times.

🛠️ How the Program Works

The user enters the number of elements (n).

The user inputs n integer values into an array.

A frequency array is initialized with -1.

The program compares each element with the rest of the array:

If a duplicate is found, the count is incremented.

Duplicate elements are marked to avoid recounting.

The final output prints only unique elements with their frequencies.

🧮 Algorithm

Read the number of elements.

Initialize an array and a frequency array.

For each element:

Set count to 1.

Compare it with remaining elements.

Mark duplicates.

Store frequency of each unique element.

Display results.

⏱️ Time and Space Complexity

Time Complexity: O(n²)

Space Complexity: O(n)

🧪 Sample Input
Enter number of elements: 5
Enter array elements:
1 2 1 3 2

✅ Sample Output
Element  Frequency
1        2
2        2
3        1
