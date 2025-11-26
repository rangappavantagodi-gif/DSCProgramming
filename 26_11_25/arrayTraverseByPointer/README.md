# 🔗 Array Traversal Using Pointers (C Program)

This project demonstrates how to **traverse an array using pointers** in C, without relying on array indexing.  
It highlights the concept of pointer arithmetic and dereferencing.

---

## 📂 Features
- Traverses an array of integers using a pointer.
- Prints each element sequentially.
- Avoids the use of array indexing (`arr[i]`).

---

## 🛠️ How It Works
1. An integer array `arr[5]` is initialized with values `{10, 20, 30, 40, 50}`.
2. A pointer `ptr` is assigned to point to the first element of the array (`ptr = arr`).
3. A `for` loop runs 5 times:
   - `*ptr` dereferences the pointer to access the current element.
   - `ptr++` moves the pointer to the next element in the array.
4. Each element is printed with its position.

---

## 📜 Code Structure
- **Array Declaration:** `int arr[5] = {10, 20, 30, 40, 50};`
- **Pointer Initialization:** `ptr = arr;`
- **Traversal Loop:**  
  ```c
  for (i = 0; i < 5; i++) {
      printf("Element %d: %d\n", i + 1, *ptr);
      ptr++;
  }

▶️ Compilation & Execution
Compile
gcc pointer_traversal.c -o pointer_traversal

Run
./pointer_traversal

🖥️ Example Output
Traversing array using pointer:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

🎯 Learning Outcome
This program helps understand:
- Basics of pointer arithmetic (ptr++).
- Dereferencing pointers to access array elements.
- Traversing arrays without using indices.



