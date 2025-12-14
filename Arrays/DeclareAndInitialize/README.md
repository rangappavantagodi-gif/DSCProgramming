# 1D Array Declaration and Initialization in C

## 📌 Description
This program demonstrates different ways to **declare and initialize a one-dimensional (1D) array in C**. It shows four commonly used methods and prints the elements of each array.

---

## 🧠 Concepts Covered
- Declaring a 1D array
- Initializing array elements
- Automatic size determination by the compiler
- Partial initialization of arrays
- Accessing and printing array elements using loops

---

## 🛠️ Program Explanation

### 🔹 Method 1: Declare first, then initialize later
```c
int arr[5];
arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
arr[3] = 40;
arr[4] = 50;
Array elements are assigned values one by one after declaration.

🔹 Method 2: Declare and initialize at the same time
c
Copy code
int arr2[5] = {100, 200, 300, 400, 500};
All elements are initialized during declaration.

🔹 Method 3: Let compiler determine the array size
c
Copy code
int arr3[] = {1, 2, 3, 4, 5};
The compiler automatically calculates the array size based on the number of elements.

🔹 Method 4: Partial initialization
c
Copy code
int arr4[5] = {1, 2};
Only the first two elements are initialized.
Remaining elements are automatically set to 0.

▶️ How to Compile and Run
Save the program as array.c

Compile using:
gcc array.c -o array

Run the program:
./array

📤 Sample Output
--Program to declare and initialize 1D array--
Array 1:
10 20 30 40 50
Array 2:
100 200 300 400 500
Array 3:
1 2 3 4 5
Array 4:
1 2 0 0 0
✅ Key Notes
Array indexing starts from 0

All elements of an array must be of the same data type

Uninitialized array elements default to 0 when partially initialized

📚 Conclusion
This program provides a clear understanding of different methods to declare and initialize 1D arrays in C, which is essential for beginners in programming.