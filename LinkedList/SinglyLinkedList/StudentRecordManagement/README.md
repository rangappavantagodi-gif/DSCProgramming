📘 Student Record Management System (Linked List in C)
📌 Overview

This project implements a Student Record Management System using a Singly Linked List in C.
It allows users to dynamically manage student records with operations like insertion, display, search, and deletion.

This program demonstrates:

Dynamic memory allocation

Pointer manipulation

Linked list traversal

Basic CRUD operations

🧱 Data Structure Used
struct Student

Each node in the linked list contains:

int roll → Student Roll Number

char name[50] → Student Name

float marks → Student Marks

struct Student *next → Pointer to next node

⚙️ Features

The program provides the following menu-driven options:

➕ Add Student

📄 Display Students

🔍 Search Student (by Roll Number)

❌ Delete Student (by Roll Number)

🚪 Exit

🧠 Functional Description
1️⃣ Add Student

Creates a new node using dynamic memory allocation (malloc)

Inserts the student at the end of the linked list

2️⃣ Display Students

Traverses the linked list

Prints all student records

3️⃣ Search Student

Searches for a student using roll number

Displays record if found

4️⃣ Delete Student

Removes student record by roll number

Frees allocated memory using free()

🏗️ How It Works

The list starts with head = NULL

Each new student is dynamically created

Nodes are linked using the next pointer

Memory is managed using malloc() and free()

🖥️ Sample Output
---- Student Record Management ----
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Exit
Enter your choice: 1

Enter Roll Number: 101
Enter Name: Ravi
Enter Marks: 85.5

⏱️ Time Complexity
Operation	Time Complexity
Insert	O(n)
Search	O(n)
Delete	O(n)
Display	O(n)
🛠️ Compilation & Execution
Compile:
gcc student.c -o student

Run:
./student

📚 Concepts Covered

Singly Linked List

Dynamic Memory Allocation

Structure in C

Pointer Handling

Menu-driven Programming