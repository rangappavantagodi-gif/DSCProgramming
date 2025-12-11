Find Maximum and Minimum Elements in an Array — C Program

This program reads a set of integers from the user and determines the maximum and minimum values in the array. It demonstrates array handling, conditional logic, and basic iteration in C.

📌 Features

Takes the number of elements as input

Accepts n integer values from the user

Finds the largest number in the array

Finds the smallest number in the array

Displays both maximum and minimum values

📂 How It Works

The program asks the user to enter the number of elements (n)

An array of size n is created

The user inputs all n integers

The first element is assumed as both max and min

The program iterates through the array:

If a value is greater than max, update max

If a value is smaller than min, update min

Finally, it prints the maximum and minimum numbers

🖥️ Sample Output
--Program to find the maximum and minimum elements in array--
Enter the number of elements in array:
5
Enter 5 elements:
10
25
3
47
18
Maximum element in array = 47
Minimum element in array = 3

🚀 How to Run

Save the code in a file, for example: max_min_array.c

Compile the program:

gcc max_min_array.c -o max_min_array


Run the compiled program:

./max_min_array