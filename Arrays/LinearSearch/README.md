# Linear Search in an Array (C Program)

## 📌 Description
This program implements the **Linear Search algorithm** in C to find a given element in a one-dimensional array. Linear search works by sequentially comparing each element of the array with the search key.

---

## 🧠 Concepts Covered
- One-dimensional arrays
- Linear search algorithm
- Looping and conditional statements
- User input and output in C

---

## 🔍 Algorithm (Linear Search)
1. Read the number of elements `n`.
2. Read `n` array elements.
3. Read the element to be searched (`key`).
4. Compare the key with each array element starting from index `0`.
5. If a match is found, display the position and stop.
6. If no match is found after checking all elements, display a message indicating that the element is not present.

---

## 🧾 Program Explanation
- The program uses a `for` loop to traverse the array.
- A flag variable `found` is used to check whether the element exists.
- Array indexing starts from `0`, but the position is displayed starting from `1` for user convenience.

---

## ▶️ How to Compile and Run

1. Save the program as `linear_search.c`
2. Compile using:
   ```bash
   gcc linear_search.c -o linear_search

3. Run the program:
    ./linear_search

📤 Sample Output
-- Linear Search in an Array --
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Enter element to search: 30
Element 30 found at position 3

⏱️ Time Complexity

Best Case: O(1) (element found at first position)

Worst Case: O(n) (element not found or at last position)

Average Case: O(n)

✅ Key Notes

Linear search works on both sorted and unsorted arrays

Simple and easy to implement

Not efficient for large data sets

📚 Conclusion

This program demonstrates a basic searching technique that is ideal for beginners to understand array traversal and searching concepts in C.