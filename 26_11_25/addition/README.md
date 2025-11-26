# ➕ Two Numbers Addition Program (C)

This project is a simple **C program** that demonstrates how to add two integers using a **function**.  

---

## 📂 Features
- Prompts the user to enter two integers.
- Uses a separate function `addTwoNumbers()` to perform addition.
- Displays the sum in a clear format.

---

## 🛠️ How It Works
1. The program declares a function prototype:  

   int addTwoNumbers(int firstNumber, int secondNumber);

2. In main(), the user is asked to input two integers.
3. The function addTwoNumbers() is called with the two numbers as arguments.
4. The function returns the sum, which is then printed to the console.

📜 Code Structure
- Function Prototype: Declares the function before main().
- Main Function: Handles input, calls the addition function, and prints the result.
- Addition Function:
int addTwoNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

▶️ Compilation & Execution
Compile
gcc add_two_numbers.c -o add_two_numbers


Run
./add_two_numbers

🖥️ Example Run
Enter the first number: 12
Enter the second number: 8
Sum of 12 and 8 is: 20


🎯 Learning Outcome
This program helps understand:
- Function prototypes and definitions in C.
- Passing arguments to functions.
- Returning values from functions.





