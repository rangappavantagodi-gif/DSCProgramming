Doubly Linked List in C (Insert at End)
📌 Description

This program demonstrates the implementation of a Doubly Linked List in the C programming language.
It allows the user to:

Create a doubly linked list dynamically

Insert nodes at the end of the list

Display the list using forward traversal

Each node contains:

Data (int)

Pointer to the previous node

Pointer to the next node

🧩 Data Structure Used
Doubly Linked List Node
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};

⚙️ Functions Used
1. createNode(int value)

Dynamically allocates memory for a new node

Initializes data, prev, and next

Returns the address of the newly created node

Exits the program if memory allocation fails

2. insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the doubly linked list

Handles both empty and non-empty lists

Returns the updated head pointer

3. display(struct NODE *head)

Displays the doubly linked list in forward direction

Output format:

NULL <-> data <-> data <-> ... <-> NULL

🖥️ Program Flow

User enters the number of nodes

User inputs data for each node

Nodes are inserted at the end of the list

The complete doubly linked list is displayed

▶️ Sample Output
How many nodes? 3
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30

Doubly Linked List (Forward Traversal):
NULL <-> 10 <-> 20 <-> 30 <-> NULL

🧠 Key Concepts Demonstrated

Dynamic memory allocation using malloc

Self-referential structures

Doubly linked list operations

Pointer manipulation in C

🛠️ How to Compile and Run
gcc doubly_linked_list.c -o dll
./dll

✅ Conclusion

This program provides a basic and clear understanding of how a doubly linked list works in C, focusing on node creation, insertion at the end, and traversal.