# Doubly Linked List Sorting (Ascending & Descending)

## 📌 Overview
This program demonstrates the implementation of a **Doubly Linked List** in C and performs **sorting in both ascending and descending order**.  
The sorting is achieved by swapping node data using a **Bubble Sort–like approach**.

The program allows the user to:
- Create a doubly linked list dynamically
- Display the list using forward traversal
- Sort the list in ascending order
- Sort the list in descending order

---

## 🧩 Data Structure Used
**Doubly Linked List**

Each node contains:
- `data` → integer value
- `prev` → pointer to the previous node
- `next` → pointer to the next node

```c
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};


⚙️ Functions Description
1. createNode(int value)

Allocates memory for a new node

Initializes data, prev, and next

Returns pointer to the new node

2. insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the doubly linked list

Handles empty list condition

Returns updated head pointer

3. display(struct NODE *head)

Displays the doubly linked list in forward direction

Format:
NULL <-> data <-> data <-> ... <-> NULL

4. sortAscedning(struct NODE *head, int n)

Sorts the doubly linked list in ascending order

Uses Bubble Sort logic

Swaps node data instead of rearranging pointers

5. sortDescedning(struct NODE *head, int n)

Sorts the doubly linked list in descending order

Uses Bubble Sort logic

Swaps node data

🧪 Algorithm Used

Bubble Sort

Time Complexity: O(n²)

Space Complexity: O(1) (in-place sorting)

Sorting is done by swapping data fields of adjacent nodes

▶️ Program Flow

Read number of nodes from user

Insert values into the doubly linked list

Display original list

Sort and display list in ascending order

Sort and display list in descending order

🖥️ Sample Input / Output

Input

How many nodes? 5
Enter value for node 1: 10
Enter value for node 2: 5
Enter value for node 3: 20
Enter value for node 4: 15
Enter value for node 5: 2


Output

Doubly Linked List (Forward Traversal):
NULL <-> 10 <-> 5 <-> 20 <-> 15 <-> 2 <-> NULL

Ascending order Doubly Linked List:
NULL <-> 2 <-> 5 <-> 10 <-> 15 <-> 20 <-> NULL

Descending order Doubly Linked List:
NULL <-> 20 <-> 15 <-> 10 <-> 5 <-> 2 <-> NULL