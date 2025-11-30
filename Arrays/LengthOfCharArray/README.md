# 📌 Program Overview

This C program demonstrates how to determine the size (length) of a character array using the `sizeof` operator. It declares an array of 8 characters, calculates its size in bytes, and prints the result.

---

## 🧠 Key Concept

* In C, the `sizeof` operator returns the total memory (in bytes) occupied by a variable or data type.
* Since a `char` in C occupies **1 byte**, the total size of the array is equal to the number of elements in it.

---

## 💻 Code Explanation

```c
char array[8] = {'a','b','c','d','e','f','g','h'};
int lengthOfArray = sizeof(array);
```

* `sizeof(array)` returns **8**, because the array contains 8 characters and each character takes 1 byte.

---

## 🖨 Output

```
Length of char array: 8
```

---

## ✔ Usage

1. Save the code in a file, e.g., `array_length.c`
2. Compile using:
   gcc array_length.c -o array_length
   
3. Run:
   ./array_length

---

## 📎 Notes

* For arrays of other data types, use:
  sizeof(array) / sizeof(array[0])
  to get the number of elements.
