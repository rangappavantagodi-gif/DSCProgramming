# Reverse an Integer Array in C

## 📖 Description
This program demonstrates how to **reverse the elements of an integer array** in C.  
It takes the size of the array and its elements as input from the user, then stores the reversed sequence in a new array and prints the result.

---

## ⚙️ Requirements
- A C compiler (e.g., GCC, Clang, or MSVC).
- Basic knowledge of compiling and running C programs.

---

## 🚀 Compilation & Execution
### Compile the program:
```bash
gcc reverse_array.c -o reverse_array

Run the program:
./reverse_array

🧪 Example Run
---Reverse an integer array---
Enter the size of array:
5
Enter the numbers for array:
10 20 30 40 50
---Reverse Array---
50
40
30
20
10


🔑 Key Concepts Used
- Variable Length Arrays (VLAs): int array[sizeOfArray]; allows dynamic allocation based on user input.
- For Loops: Used to read input and reverse the array.
- Index Manipulation: Elements are copied in reverse order using reverseArray[sizeOfArray - i] = array[i - 1];.




