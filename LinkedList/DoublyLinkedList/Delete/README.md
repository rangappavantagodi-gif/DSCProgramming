# 🧩 Doubly Linked List – Deletion Operations in C

## 📌 Description
This program implements a **Doubly Linked List** in the C programming language and demonstrates **deletion operations** such as:
- Deleting a node from the **beginning**
- Deleting a node from the **end**
- Deleting a node from a **specific position**

The program also includes a **menu-driven interface** for user interaction.

---

## 🧱 Data Structure Used

### NODE Structure
```c
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};
data → Stores integer value

prev → Pointer to previous node

next → Pointer to next node

⚙️ Functions Implemented
🔹 createNode(int value)
Dynamically allocates memory for a new node

Initializes data, prev, and next

🔹 insertEnd(struct NODE *head, int value)
Inserts a new node at the end of the list

Handles empty list case

🔹 display(struct NODE *head)
Displays the list in forward direction

Output format:

NULL <-> 10 <-> 20 <-> 30 <-> NULL
🗑️ Deletion Operations
🔸 deleteBeginning(struct NODE *head)
Deletes the first node

Updates head and resets prev pointer

🔸 deleteEnd(struct NODE *head)
Deletes the last node

Handles single-node and empty list cases

🔸 deletePosition(struct NODE *head, int position)
Deletes a node at a given position (1-based index)

Handles invalid position and out-of-range cases

🧠 Working Logic
The list is created using insert at end

Deletion operations update both prev and next pointers

Memory is properly freed using free()

Program runs continuously using a menu-driven loop

📋 Menu Options

1 → Delete Beginning
2 → Delete End
3 → Delete at Position
4 → Display List
5 → Exit
▶️ Sample Output

Doubly Linked List (Forward Traversal):
NULL <-> 10 <-> 20 <-> 30 <-> NULL

MENU:
1. Delete Beginning
2. Delete End
3. Delete at Position
4. Display List
5. Exit
⏱️ Time Complexity
Operation	Complexity
Insert at end	O(n)
Delete at beginning	O(1)
Delete at end	O(n)
Delete at position	O(n)

🧮 Space Complexity
O(n) for storing n nodes

O(1) auxiliary space for operations

🛠️ How to Compile and Run
bash
gcc doubly_linked_list.c -o dll
./dll

✅ Key Concepts Covered
Doubly Linked List

Dynamic memory allocation

Pointer manipulation

Menu-driven programming

Deletion operations

🏁 Conclusion
This program demonstrates efficient implementation of deletion operations in a doubly linked list using proper pointer management.