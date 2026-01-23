Singly Linked List Sorting (Ascending Order) – C
📌 Description

This project demonstrates how to create, insert, display, and sort a singly linked list in ascending order using the C programming language.
The sorting logic is implemented using a simple comparison-based (Bubble Sort–style) approach by swapping node data.

🛠️ Features

Dynamic creation of singly linked list

Insertion of nodes at the end

Display of linked list elements

Sorting the linked list in ascending order

User input–driven execution

🧩 Data Structure
Singly Linked List

Each node contains:

data → integer value

next → pointer to the next node

struct NODE {
    int data;
    struct NODE *next;
};

⚙️ Functions Overview
Function Name	Description
createNode()	Creates a new node dynamically
insertEnd()	Inserts a node at the end of the list
sortAscedning()	Sorts the list in ascending order
display()	Displays the linked list
🧠 Algorithm

Read number of nodes from the user

Insert each node at the end of the list

Display the original list

Compare each node with the remaining nodes

Swap data if values are out of order

Repeat until the list is sorted

Display the sorted list

▶️ Sample Input
How many nodes? 4
Enter value for node 1: 40
Enter value for node 2: 10
Enter value for node 3: 30
Enter value for node 4: 20

✅ Sample Output
Singly Linked List:
40 -> 10 -> 30 -> 20 -> NULL

Ascending order Singly Linked List:
10 -> 20 -> 30 -> 40 -> NULL

⏱️ Time & Space Complexity
Metric	Complexity
Time	O(n²)
Space	O(1)
🚀 Compilation & Execution
gcc singly_linked_list_sort.c -o sll_sort
./sll_sort