Dynamic Memory Allocation Using calloc() in C

This program demonstrates how to allocate and use dynamic memory in C using the calloc() function. It also shows how to safely check for allocation failure, access allocated memory, and free the allocated space to prevent memory leaks.

📌 Overview

The program:

Allocates memory for 4 integers using calloc().

Automatically initializes all allocated memory values to 0.

Stores values in the first three elements of the allocated array.

Prints all four values—including the default zero-initialized last element.

Frees the allocated memory once it is no longer needed.

This example helps beginners understand how calloc() works and how it differs from malloc().

🧠 Key Concepts Covered
✅ calloc()

Allocates memory for a specified number of elements.

Initializes all allocated memory to zero.

Syntax:

ptr = calloc(number_of_elements, size_of_each_element);

✅ Zero Initialization

Because calloc() clears the memory, all integers in the allocated block start with the value 0.

✅ Pointer Indexing

The program assigns values like:

ptr[0] = 2

ptr[1] = 4

ptr[2] = 6

The fourth element ptr[3] remains 0 because it is untouched and calloc() initializes it.

✅ Memory Deallocation

The program uses free() to release the allocated memory:

free(ptr);


This prevents memory leaks.

🧵 Program Flow Summary
1. Call calloc() to allocate memory for 4 integers.
2. Check if the allocation was successful.
3. Assign values to the first three elements.
4. Print all four values, including the zero-initialized last element.
5. Free the allocated memory.

📤 Example Output
--Dynamic memory allocation using calloc--
2,4,6,0

(The last zero comes from calloc’s automatic memory initialization.)

🛡️ Important Notes

Always check for NULL to ensure memory allocation succeeded.

calloc() initializes memory, unlike malloc().

Always call free() after finishing with dynamically allocated memory.

Access only valid indexes within the allocated memory.