# Doubly Linked List in C

## 📌 Overview

This program demonstrates the implementation of a **Doubly Linked List** in C. It allows the user to:

* Create a doubly linked list dynamically
* Insert nodes at the end of the list
* Display the list in **forward** direction
* Display the list in **reverse** direction

Each node contains an integer value and two pointers:

* `prev` → points to the previous node
* `next` → points to the next node

---

## 🧱 Data Structure Used

```c
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};
```

---

## ⚙️ Functions Description

### 1. `createNode(int value)`

* Allocates memory for a new node
* Initializes data, `prev`, and `next` pointers
* Returns the address of the newly created node

### 2. `insertEnd(struct NODE *head, int value)`

* Inserts a new node at the **end** of the doubly linked list
* Handles the case when the list is empty
* Returns the updated head pointer

### 3. `display(struct NODE *head)`

* Displays the elements of the list in **forward direction**
* Traverses the list using the `next` pointer

### 4. `displayReverse(struct NODE *head)`

* Displays the elements of the list in **reverse direction**
* First moves to the last node, then traverses backward using the `prev` pointer

---

## ▶️ Program Flow

1. Read the number of nodes from the user
2. Insert values into the doubly linked list using `insertEnd()`
3. Display the list in forward order
4. Display the list in reverse order

---

## 🧪 Sample Input

```
How many nodes? 4
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30
Enter value for node 4: 40
```

## 📤 Sample Output

```
Doubly Linked List (Forward Traversal):
NULL <-> 10 <-> 20 <-> 30 <-> 40 <-> NULL

Doubly Linked List (Reverse Traversal):
NULL <-> 40 <-> 30 <-> 20 <-> 10 <-> NULL
```

---

## 🧠 Key Concepts Covered

* Dynamic memory allocation (`malloc`)
* Self-referential structures
* Doubly linked list traversal
* Forward and backward navigation

---

## ✅ Advantages of Doubly Linked List

* Allows traversal in both directions
* Efficient insertion and deletion
* Useful for applications like playlists and navigation systems

---

## 📝 Compilation & Execution

```bash
gcc doubly_linked_list.c -o dll
./dll
```

---

## 📌 Conclusion

This program provides a clear and simple example of implementing and traversing a **doubly linked list** in C using both forward and reverse traversal methods.
