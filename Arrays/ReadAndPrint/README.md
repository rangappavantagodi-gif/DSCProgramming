# Read and Print Elements of an Array in C

## 📌 Overview

This program demonstrates how to **read elements into a one-dimensional array and print them** using the C programming language. It is a fundamental example for understanding array input/output operations.

---

## 🎯 Objectives

* Read the size of an array from the user
* Accept integer elements into the array
* Display the entered elements in the same order
* Practice basic array traversal and I/O in C

---

## 🧠 Approach

* Prompt the user to enter the number of elements
* Declare an integer array of the given size
* Use a `for` loop with `scanf()` to read each element
* Use another `for` loop with `printf()` to display the elements

---

## ▶️ How to Build and Run

Use a standard C compiler such as **GCC**:

```bash
gcc read_print_array.c -o read_print_array
./read_print_array
```

---

## 🧪 Example Input

```
5
10 20 30 40 50
```

## 📤 Example Output

```
Array elements are:
10 20 30 40 50
```

---

## ⏱️ Complexity Analysis

* **Time Complexity:** O(n)
* **Space Complexity:** O(n) (for storing array elements)

---

## ✅ Key Concepts Used

* One-dimensional arrays
* `for` loop iteration
* Input and output using `scanf()` and `printf()`

---

## 📚 Use Cases

* Learning basic array operations in C
* Programming lab exercises
* Foundation for advanced data structure concepts
