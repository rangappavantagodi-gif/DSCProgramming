Doubly Linked List in C (With Reversal)
📌 Overview

This program implements a Doubly Linked List in C with the following operations:

Create a node

Insert nodes at the end

Display the list (forward traversal)

Reverse the doubly linked list in-place

Each node contains:

data – integer value

prev – pointer to the previous node

next – pointer to the next node

🧱 Data Structure Used
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};

⚙️ Features Implemented
1️⃣ Create Node

Dynamically allocates memory using malloc

Initializes prev and next pointers to NULL

2️⃣ Insert at End

Traverses to the last node

Links the new node using both next and prev pointers

3️⃣ Display List

Prints the list from head to tail

Output format:

NULL <-> 10 <-> 20 <-> 30 <-> NULL

4️⃣ Reverse Doubly Linked List

Reverses the list without using extra memory

Swaps prev and next pointers for each node

Updates the head pointer at the end

🔁 Reverse Logic (Concept)

For each node:

Swap prev and next

Move to the next node (which is prev after swapping)

Update head after traversal

🧪 Sample Input
How many nodes? 4
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30
Enter value for node 4: 40

📤 Sample Output
Doubly Linked List (Forward Traversal):
NULL <-> 10 <-> 20 <-> 30 <-> 40 <-> NULL

Doubly Linked List After Reversal:
NULL <-> 40 <-> 30 <-> 20 <-> 10 <-> NULL

⏱️ Time and Space Complexity
Operation	Time Complexity	Space Complexity
Insertion	O(n)	O(1)
Display	O(n)	O(1)
Reverse	O(n)	O(1)
🛠️ How to Compile and Run
gcc doubly_linked_list.c -o dll
./dll
