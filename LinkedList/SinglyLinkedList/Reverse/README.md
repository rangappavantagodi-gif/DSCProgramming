# Singly Linked List with Reverse Operation in C

## 📌 Overview

This program demonstrates the implementation of a **Singly Linked List** in C. It allows the user to:

* Dynamically create a linked list
* Insert nodes at the end of the list
* Display the linked list
* Reverse the linked list using pointer manipulation

Each node contains an integer data value and a pointer to the next node.

---

## 🧱 Data Structure Used

```c
struct NODE{
    int data;
    struct NODE *next;
};
```

---

## ⚙️ Functions Description

### 1. `createNode(int value)`

* Allocates memory dynamically for a new node
* Initializes the data field and sets `next` to NULL
* Returns the address of the newly created node

### 2. `insertEnd(struct NODE *head, int value)`

* Inserts a new node at the **end** of the singly linked list
* Handles the case when the list is empty
* Returns the updated head pointer

### 3. `display(struct NODE *head)`

* Displays all elements of the linked list
* Traverses the list using the `next` pointer
* Output format: `data -> data -> ... -> NULL`

### 4. `reverseList(struct NODE *head)`

* Reverses the singly linked list iteratively
* Uses three pointers: `prev`, `current`, and `next`
* Returns the new head of the reversed list

---

## ▶️ Program Flow

1. Read the number of nodes from the user
2. Insert node values at the end of the linked list
3. Display the original linked list
4. Reverse the linked list
5. Display the reversed linked list

---

## 🧪 Sample Input

```
How many nodes?
5
Enter the value of node 1: 10
Enter the value of node 2: 20
Enter the value of node 3: 30
Enter the value of node 4: 40
Enter the value of node 5: 50
```

## 📤 Sample Output

```
Singly Linked List:
10->20->30->40->50->NULL

Reversed Linked List:
50->40->30->20->10->NULL
```

---

## 🧠 Key Concepts Covered

* Self-referential structures
* Dynamic memory allocation using `malloc`
* Singly linked list traversal
* Reversing a linked list using pointers

---

## ⏱️ Time Complexity

* Insertion at end: **O(n)**
* Display: **O(n)**
* Reverse list: **O(n)**

---

## 📝 Compilation & Execution

```bash
gcc singly_linked_list_reverse.c -o sll
./sll
```

---

## 📌 Conclusion

This program provides a clear and practical example of creating, displaying, and reversing a **singly linked list** in C, which is a fundamental data structure concept.
