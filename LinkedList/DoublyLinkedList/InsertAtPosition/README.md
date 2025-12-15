Doubly Linked List in C – Insert at Given Position
📌 Description

This program implements a Doubly Linked List in C using dynamic memory allocation.
It supports:

Creating a doubly linked list

Inserting nodes at the end of the list

Inserting a node at a specified position

Displaying the list using forward traversal

Each node contains:

An integer data value

A pointer to the previous node

A pointer to the next node

🧩 Data Structure Used
Doubly Linked List Node
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};

⚙️ Functions Used
1. createNode(int value)

Allocates memory dynamically using malloc

Initializes data, prev, and next

Exits the program if memory allocation fails

Returns a pointer to the newly created node

2. insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the doubly linked list

Handles the case when the list is empty

Returns the updated head pointer

3. insertAtPosition(struct NODE *head, int value, int position)

Inserts a new node at the specified position

If position == 1, inserts the node at the beginning

If the position is out of range, inserts the node at the end

Returns the updated head pointer

4. display(struct NODE *head)

Displays the elements of the doubly linked list in forward direction

Output format:

NULL <-> data <-> data <-> ... <-> NULL

🖥️ Program Flow

User enters the number of nodes

Values are inserted at the end of the list

The initial doubly linked list is displayed

User enters the position and value for a new node

The node is inserted at the specified position

The updated list is displayed

▶️ Sample Output
How many nodes? 3
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30

Doubly Linked List (Forward Traversal):
NULL <-> 10 <-> 20 <-> 30 <-> NULL

Enter the position where new node to be added:
2
Enter the value of node:
15

Updated Doubly Linked List:
NULL <-> 10 <-> 15 <-> 20 <-> 30 <-> NULL

🧠 Key Concepts Demonstrated

Doubly linked list implementation

Dynamic memory allocation (malloc)

Self-referential structures

Pointer manipulation

Insertion at a specific position

🛠️ How to Compile and Run
gcc doubly_linked_list.c -o dll
./dll

✅ Conclusion

This program provides a practical understanding of how to insert nodes at a specific position in a doubly linked list using C. It is useful for learning dynamic data structures and pointer operations.