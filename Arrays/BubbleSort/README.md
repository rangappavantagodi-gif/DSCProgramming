# Bubble Sort Implementation in C

## 📌 Overview
This project demonstrates the implementation of the **Bubble Sort algorithm** in the C programming language.  
The program accepts array elements from the user, sorts them in **ascending order** using Bubble Sort with optimization, and displays the array **before and after sorting**.

---

## 🛠️ Features
- User-defined array size and elements
- Bubble Sort with **early termination optimization**
- Modular programming using functions
- Input validation for array size
- Clear and readable output

---

## 📂 Program Structure
- `bubbleSort()` – Sorts the array using Bubble Sort algorithm
- `displayArray()` – Displays the elements of the array
- `main()` – Handles user input, function calls, and program flow

---

## 🧠 Algorithm (Bubble Sort)
1. Compare adjacent elements in the array.
2. Swap them if they are in the wrong order.
3. After each pass, the largest element moves to its correct position.
4. Repeat the process until no swaps occur (optimized condition).

---

## ⏱️ Time and Space Complexity
| Case        | Time Complexity |
|-------------|----------------|
| Best Case   | O(n) *(Already sorted)* |
| Average Case| O(n²) |
| Worst Case  | O(n²) |

**Space Complexity:** O(1) (In-place sorting)

---

## ▶️ How to Compile and Run

### Compile
```bash
gcc bubble_sort.c -o bubble_sort

./bubble_sort

🧪 Sample Input
Enter number of array elements:
5
Enter elements:
5 3 1 4 2

📤 Sample Output
Array before sorting:
5 3 1 4 2
Array after sorting:
1 2 3 4 5
