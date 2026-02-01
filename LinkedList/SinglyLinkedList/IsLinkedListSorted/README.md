Singly Linked List – Sorted Check (C Program)
📌 Description

This C program demonstrates the implementation of a singly linked list and checks whether the list is sorted in ascending order.
The program allows the user to:

Create a linked list dynamically

Insert nodes at the end of the list

Display the linked list

Verify if the linked list is sorted

🧱 Data Structure Used

Singly Linked List

Each node contains:

data → integer value

next → pointer to the next node

struct NODE {
    int data;
    struct NODE *next;
};

⚙️ Functions Implemented
1️⃣ createNode(int value)

Dynamically allocates memory for a new node

Initializes data and sets next to NULL

Returns the created node

2️⃣ insertEnd(struct NODE *head, int value)

Inserts a new node at the end of the linked list

Returns the updated head pointer

3️⃣ isSorted(struct NODE *head)

Checks whether the linked list is sorted in ascending order

Returns:

1 → if sorted

0 → if not sorted

4️⃣ display(struct NODE *head)

Traverses and prints the linked list in the format:

data1->data2->data3->NULL

▶️ Program Flow

Read the number of nodes from the user

Insert node values into the linked list

Display the linked list

Check and print whether the list is sorted

🖥️ Sample Input
How many nodes?
5
Enter the value of node 1:10
Enter the value of node 2:20
Enter the value of node 3:30
Enter the value of node 4:40
Enter the value of node 5:50

📤 Sample Output
Singly Linked List:
10->20->30->40->50->NULL
Linked list is sorted

⏱️ Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1) (excluding dynamic memory for nodes)

📝 Notes

An empty list or a single-node list is always considered sorted.

Dynamic memory allocation is used (malloc).

Proper error handling is included for memory allocation failure.

🚀 How to Compile and Run
gcc linkedlist_sorted.c -o linkedlist_sorted
./linkedlist_sorted