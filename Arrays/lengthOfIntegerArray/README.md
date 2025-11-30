## 📌 Program Overview

This C program demonstrates how to calculate the number of elements in an integer array using the `sizeof` operator. It defines an integer array of 10 elements, computes its length, and prints the result.

---

## 🧠 Key Concept: Calculating Array Length in C

To find the number of elements in an array:

```
sizeof(array) / sizeof(array[0])
```

* `sizeof(array)` → total size of the array in bytes
* `sizeof(array[0])` → size of one element in bytes

For an `int`, the size is typically **4 bytes**, so an array of 10 integers occupies **40 bytes**.

---

## 💻 Code Explanation

```c
int array[10] = {1,2,3,4,5,6,7,8,9,10};
int lengthOfArray = sizeof(array) / sizeof(array[0]);
```

* `sizeof(array)` returns **40**
* `sizeof(array[0])` returns **4**
* Therefore, the length of the array is **10**

---

## 🖨 Output

```
Length of integer array: 10
```

---

## ✔ Usage Instructions

1. Save the code into a file named, for example, `array_length.c`
2. Compile the program:

   ```
   gcc array_length.c -o array_length
   ```
3. Run the program:

   ```
   ./array_length
   ```

---

## 📎 Notes

* This method works for any statically declared array in C.
* Do not use `sizeof` on dynamically allocated arrays (e.g., using `malloc`), as it will not give correct length.

---
