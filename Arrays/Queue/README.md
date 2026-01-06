# Queue Implementation Using Array in C

## 📌 Description
This program demonstrates the implementation of a **Queue data structure using an array** in C.  
It follows the **FIFO (First In First Out)** principle and supports basic queue operations such as **Enqueue**, **Dequeue**, and **Display** using a **menu-driven approach**.

---

## ⚙️ Features
- Enqueue (Insert an element into the queue)
- Dequeue (Remove an element from the queue)
- Display queue elements
- Handles overflow and underflow conditions
- Simple and easy-to-understand logic

---

## 🧱 Queue Details
- Queue Type: **Linear Queue**
- Data Structure: **Array**
- Maximum Size: **3 elements** (defined using `#define MAX 3`)
- Front and Rear indices are used to manage the queue

---

## 🛠️ Operations Explanation

### 1. Enqueue
- Inserts an element at the rear of the queue
- Checks for **Queue Overflow** when `rear == MAX - 1`
- Initializes `front` during the first insertion

### 2. Dequeue
- Removes an element from the front of the queue
- Checks for **Queue Underflow**
- Resets `front` and `rear` when the queue becomes empty

### 3. Display
- Displays all elements from `front` to `rear`
- Shows a message if the queue is empty

---

## ▶️ How to Run the Program
1. Compile the program:
gcc queue.c -o queue

2. Run the executable:
./queue

3. Choose operations from the menu by entering numbers (1–4)

---

## 🖥️ Sample Output
--- Queue Menu ---

1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice: 1
Enter the value to enque: 10
Inserted 10 into queue.

Enter your choice: 3
Queue elements: 10

Enter your choice: 2
Deleted 10 from queue.


---

## ⚠️ Limitation
This implementation is a **linear queue**, which may result in **false overflow** after dequeue operations even when there is free space in the array.

➡️ This limitation can be solved using a **Circular Queue**.

---