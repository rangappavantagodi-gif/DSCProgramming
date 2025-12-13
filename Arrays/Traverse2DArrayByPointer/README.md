# Traversing a 2D Array Using Pointers in C

## 📖 Overview
This program demonstrates how to traverse a **2D array** in C using **pointer arithmetic**.  
Instead of accessing elements with traditional array indexing (`array[i][j]`), the program uses a pointer to iterate through all elements linearly.

---

## 🧩 Code Explanation
### Key Concepts:
- **2D Array Initialization**:  
  ```c
  int array[3][3] = {
      {1,2,3},
      {4,5,6},
      {7,8,9}
  };

- Pointer to Array:
int *ptr = array; // Points to the first element of the 2D array
- 
- Traversal Using Pointer Arithmetic:
The loop runs from 0 to rows * columns - 1, and each element is accessed as:
*(ptr + i)
- 

- Row Formatting:
After every columns elements, a newline is printed to maintain the 2D structure.

▶️ Program Output
When executed, the program prints:
Traversing 2D array using pointer:
1 2 3 
4 5 6 
7 8 9 

⚙️ How to Compile and Run
- Save the code in a file, e.g., array_pointer.c.
- Open a terminal and compile:
gcc array_pointer.c -o array_pointer
- Run the program:
./array_pointer

🎯 Learning Outcomes
- Understand how pointers can be used to traverse multi-dimensional arrays.
- Learn how memory layout of arrays in C allows linear traversal.
- Practice formatting output to represent 2D structures.



