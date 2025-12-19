2D Array Declaration and Initialization in C
📌 Aim

To write a C program that demonstrates different ways of declaring and initializing a 2D array, and to display the elements using nested loops.

🛠️ Tools & Language

Language: C

Compiler: GCC / Turbo C / Any standard C compiler

Header File Used: stdio.h

📖 Description

This program illustrates four different methods of working with 2D arrays in C:

Declaration first, then initialization

Declaration and initialization at the same time

One-line initialization

Partial initialization (remaining elements set to 0)

Each array is printed using nested for loops to show its row–column structure.

🧩 Program Explanation
1️⃣ Declare first, then initialize later
int arr[2][2];


Elements are assigned individually using indices.

Useful when values are not known at declaration time.

2️⃣ Declare and initialize at the same time
int arr2[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};


Most commonly used method.

Easy to read and maintain.

3️⃣ One-line initialization
int arr3[2][2] = {1, 2, 3, 4};


Values are filled row-wise.

Compact representation.

4️⃣ Partial initialization
int arr4[2][3] = {
    {1, 2},
    {4}
};


Uninitialized elements are automatically set to 0.

🔁 Output

The program prints the contents of all four 2D arrays in matrix form, clearly showing how each initialization method works.

✅ Conclusion

A 2D array in C can be initialized in multiple ways.

Partial initialization automatically assigns 0 to remaining elements.

Nested loops are used to access and display 2D array elements.

Understanding these methods is essential for handling matrices and tables in C programming.