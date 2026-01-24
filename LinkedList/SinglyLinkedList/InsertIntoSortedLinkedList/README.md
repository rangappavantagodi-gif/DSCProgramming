Insert into a Sorted Singly Linked List (C)
📌 Description

This project demonstrates how to insert a new element into an already sorted singly linked list (ascending order) using the C programming language.
The program ensures that the list remains sorted after every insertion.

🛠️ Features

Dynamic creation of singly linked list nodes

Insertion of elements while maintaining sorted order

Display of linked list elements

Handles insertion at beginning, middle, and end

User-input driven execution

🧩 Data Structure Used
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
insertSorted()	Inserts a node into the list while maintaining ascending order
display()	Displays the elements of the linked list
🧠 Algorithm

Create a new node with the given value

If the list is empty or the value is smaller than the head:

Insert the node at the beginning

Otherwise:

Traverse the list to find the correct position

Insert the node at that position

Display the updated list

▶️ Sample Input
How many nodes ? 4
Enter value 1: 10
Enter value 2: 20
Enter value 3: 30
Enter value 4: 40

Enter new value to insert: 25

✅ Sample Output
Sorted Singly Linked List:
10 -> 20 -> 30 -> 40 -> NULL

After Insertion:
10 -> 20 -> 25 -> 30 -> 40 -> NULL

⏱️ Time & Space Complexity
Metric	Complexity
Time Complexity	O(n)
Space Complexity	O(1)
🚀 Compilation & Execution
gcc insert_sorted_sll.c -o insert_sorted
./insert_sorted
