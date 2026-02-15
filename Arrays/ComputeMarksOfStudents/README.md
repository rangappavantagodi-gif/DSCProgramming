📘 Student Marks Computation in C
📌 Project Description

This C program computes the total marks and average marks of multiple students using arrays.

It allows the user to:

Enter the number of students

Enter marks for 5 subjects per student

Calculate total and average marks

Display the results clearly

🎯 Objective

To demonstrate the use of:

One-dimensional arrays

Two-dimensional arrays

Nested loops

Basic arithmetic operations

User input handling in C

🛠️ Technologies Used

Language: C

Compiler: GCC / Turbo C / Any standard C compiler

📂 Program Structure
Arrays Used

marks[n][5] → Stores marks of n students in 5 subjects

total[n] → Stores total marks of each student

average[n] → Stores average marks of each student

Logic

Read number of students.

Use nested loops:

Outer loop → For each student

Inner loop → For 5 subjects

Calculate:

Total = Sum of 5 subject marks

Average = Total / 5

Display results.

▶️ How to Run the Program
Step 1: Compile
gcc student_marks.c -o student_marks

Step 2: Execute
./student_marks


(Windows users can run student_marks.exe)

💡 Sample Input
Enter number of students: 2
Enter marks for Student 1:
80 75 90 85 70
Enter marks for Student 2:
60 65 70 75 80

📤 Sample Output
Student 1
Total Marks = 400
Average = 80.00

Student 2
Total Marks = 350
Average = 70.00

📖 Concepts Covered

2D Arrays

Nested Loops

Arithmetic Operations

Input & Output in C

Basic Student Record Processing