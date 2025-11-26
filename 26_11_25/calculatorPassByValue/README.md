# 🧮 Pass By Value Calculator (C Program)

This project is a simple **calculator program in C** that demonstrates the concept of **functions with pass-by-value parameters**.  
It allows users to perform basic arithmetic operations: addition, subtraction, multiplication, and division.

---

## 📂 Features
- Addition of two numbers
- Subtraction of two numbers
- Multiplication of two numbers
- Division of two numbers (with error handling for division by zero)

---

## 🛠️ How It Works
1. The program prompts the user to enter two floating-point numbers.
2. A menu is displayed with four options:
   - `1` → Addition  
   - `2` → Subtraction  
   - `3` → Multiplication  
   - `4` → Division  
3. Based on the user’s choice, the corresponding function is called.
4. The result is displayed with two decimal precision.

---

## 📜 Code Structure
- **Functions Defined:**
  - `float add(float num1, float num2)`
  - `float subtract(float num1, float num2)`
  - `float multiply(float num1, float num2)`
  - `float divide(float num1, float num2)`

- **Main Program Flow:**
  - Input two numbers
  - Display menu
  - Switch-case to call the appropriate function
  - Print result or error message

---

## ▶️ Compilation & Execution

### Compile
```bash
gcc calculator.c -o calculator

Run:
./calculator


🖥️ Example Run
Pass By Value Calculator Program
Enter first number:
10
Enter second number:
5
### Calculator menu ###
Enter 1 for Addition
Enter 2 for Subtraction
Enter 3 for Multiplication
Enter 4 for Division
Enter your choice:
1
Result = 15.00

⚠️ Notes
- Division by zero is handled with an error message:
"Error division by zero"
- Only valid menu choices (1–4) are supported. Any other input results in:
"Invalid choice"

🎯 Learning Outcome
This program helps understand:
- Function declaration and definition in C
- Passing arguments by value
- Using switch-case for menu-driven programs
- Basic error handling in arithmetic operations







