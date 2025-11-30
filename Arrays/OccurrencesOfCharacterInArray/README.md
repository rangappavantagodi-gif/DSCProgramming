## 📌 Program Overview

This C program counts how many times a specific character appears in a character array. It demonstrates the use of loops, array indexing, and the `sizeof` operator to determine array length.

---

## 🧠 Key Concept

To find the number of occurrences of a character in an array:

1. Loop through each element
2. Compare it with the target character
3. Increment a counter when a match is found

The program also calculates the array length using:

```
sizeof(array) / sizeof(array[0])
```

---

## 💻 Code Summary

* The character array contains multiple letters including the target `'a'`.
* The program iterates through each element.
* Every time `'a'` is found, the counter increases.
* Finally, the total count is displayed.

---

## 🔢 Example Output

```
--Program to find the number ocuurances of a character in array--
Character 'a' occurs 4 times in the array.
```

---

## 📎 How to Compile and Run

### **Compile:**

```
gcc Occurances.c -o Occurances
```

### **Run:**

```
./Occurances
```

(Replace the filename if your file name is different.)

---

## ✔ Notes

* This method works for any statically defined character array.
* For strings (`char str[] = "hello";`), the same logic applies.
* The program can be modified to accept user input if needed.

---
