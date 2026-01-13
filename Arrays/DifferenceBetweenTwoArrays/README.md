Element-wise Difference of Two Arrays (C Program)
📌 Description

This C program finds the element-wise difference between two arrays of the same size.
The difference is calculated by subtracting each element of the second array from the corresponding element of the first array.

                            result[i]=arr1[i]−arr2[i]

🧠 Algorithm

Read the number of elements n.

Declare three arrays of size n.

Read elements of the first array.

Read elements of the second array.

Subtract corresponding elements of the two arrays.

Store the result in a third array.

Display the resulting array.

⌨️ Input

An integer n (number of elements).

n integers for the first array.

n integers for the second array.

📤 Output

An array containing the element-wise difference of the two input arrays.

🧪 Example

Input:

Enter number of elements: 5
Enter elements of first array:
10 20 30 40 50
Enter elements of second array:
1 2 3 4 5


Output:

Difference between two arrays (element-wise):
9 18 27 36 45

⚙️ How to Compile and Run
gcc array_difference.c -o array_difference
./array_difference