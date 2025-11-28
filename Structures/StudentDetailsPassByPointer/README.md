# Student Details Program in C

## 📖 Overview
This program demonstrates how to use **structures** in C to store and manage student information.  
It allows the user to:
- Input details (Name, Age, Marks) for multiple students.
- Display the entered details in a structured format.

The program highlights:
- Use of `struct` for grouping related data.
- Passing arrays of structures to functions.
- Pointer arithmetic for accessing structure members.

---

## 🛠️ Features
- Dynamically handles any number of students (entered at runtime).
- Reads student details using a dedicated function.
- Displays student details neatly using another function.
- Demonstrates modular programming with function separation.

---

## 📂 Code Structure
- **`struct student`** → Defines the student entity with `name`, `age`, and `marks`.
- **`readStudentDetails()`** → Reads details for all students.
- **`displayStudentDetails()`** → Prints details of all students.
- **`main()`** → Controls program flow.

---

## ▶️ How to Compile and Run
1. Save the code in a file, e.g., `student.c`.
2. Open a terminal and compile using:
   ```bash
   gcc student.c -o student

   - Run the program:
./student


💻 Sample Input/Output
Input
Enter number of students: 2
Enter details for student: 1
Name : Alice
Age : 20
Marks : 85
Enter details for student: 2
Name : Bob
Age : 22
Marks : 90


Output
--Students Details--
Student 1:
Name: Alice
Age: 20
Marks: 85
Student 2:
Name: Bob
Age: 22
Marks: 90

⚠️ Notes
- The program uses scanf("%s", ...) for reading names, which does not handle spaces.
Example: entering John Doe will only capture John.
To handle full names with spaces, consider using fgets() instead.
- Array size for names is fixed at 30 characters. Longer names will be truncated.

📚 Learning Outcomes
By studying this program, you will learn:
- How to define and use structures in C.
- How to pass arrays of structures to functions.
- How to use pointer arithmetic with structures.
- Basics of modular programming in C.



