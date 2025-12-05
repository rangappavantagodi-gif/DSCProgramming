Dynamic Memory Allocation in C (malloc and realloc)

This program demonstrates how to allocate and resize memory dynamically in C using malloc() and realloc(). It also shows how to safely handle memory allocation failures and how to properly free allocated memory to avoid memory leaks.

📌 Overview

The program performs the following operations:

Allocates memory for 4 integers using malloc().

Checks whether the memory allocation was successful.

Attempts to resize the allocated memory block to hold 6 integers using realloc().

Safely handles reallocation failures by freeing the original memory.

Frees the dynamically allocated memory after use.

This example illustrates the correct and safe usage of dynamic memory management in C.

🧠 Key Concepts Covered
1. malloc()

Allocates a specific number of bytes.

Returns a pointer to the allocated memory.

Returns NULL if the allocation fails.

2. realloc()

Resizes a memory block previously allocated by malloc().

May return a new memory address if it needs to move the block.

Returns NULL if reallocation fails.

If reallocation fails, the original pointer remains valid and must be freed.

3. free()

Frees memory that was previously allocated.

Prevents memory leaks.

Must be called exactly once per successful allocation.

🧵 Program Flow Summary
1. Use malloc() to allocate memory for 4 integers.
2. If allocation succeeds, print the allocated memory address.
3. Use realloc() to resize the memory block to store 6 integers.
4. If realloc() fails:
      - Print error message
      - Free the original memory block
5. If realloc() succeeds:
      - Print the new memory address
      - Free the resized memory block

🛡️ Important Notes

Always verify if malloc() or realloc() returned NULL.

On realloc() failure:

The original memory is NOT lost.

You must free the original pointer manually.

Never access memory after freeing it.

Always free dynamically allocated memory at the end to prevent leaks.

📤 Example Output
--Dynamic memory allocation using malloc--
16 bytes allocated at address 0x559e23202020
24 bytes reallocated at address 0x559e232022e0