Check if Two Arrays Are Equal (C Program)
📌 Description

This C program checks whether two arrays are equal or not.
Two arrays are considered equal if:

They have the same number of elements

Corresponding elements at each index are identical

🧠 Approach / Algorithm

Read the number of elements n.

Read elements of the first array.

Read elements of the second array.

Compare both arrays element by element.

If any mismatch is found, mark the arrays as not equal.

Display the result.

⌨️ Input

An integer n representing the number of elements.

n integers for the first array.

n integers for the second array.

📤 Output

"Both arrays are equal." if all elements match.

"Arrays are not equal." if at least one element differs.

🧪 Example

Input:

Enter number of elements: 5
Enter elements of first array:
1 2 3 4 5
Enter elements of second array:
1 2 3 4 5


Output:

Both arrays are equal.

⚙️ How to Compile and Run
gcc array_equal.c -o array_equal
./array_equal

📚 Concepts Used

Arrays

Loops

Conditional statements

User input/output in C