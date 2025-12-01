🔍 Program to Find a Substring Inside a String
📘 Overview

This C program reads two strings from the user:

A main string

A substring to search

It then performs a manual substring search to determine whether the substring exists inside the main string and prints the index where it first appears. If the substring is not found, it prints an appropriate message.

The program uses safe input handling with fgets() to support strings with spaces and uses strcspn() to remove trailing newline characters.

🧠 Key Features

Accepts full strings including spaces using fgets().

Removes newline characters safely using strcspn().

Uses manual matching (naive string search algorithm).

Handles special cases:

Substring longer than main string

Empty substring

Substring not found

Uses stdbool.h for boolean flag (true / false).

🛠️ Concepts Demonstrated

String input using fgets()

Loop-based substring search

Boolean flags

String length handling (strlen)

Newline removal

Nested loop logic


▶️ Example Output
--Program to find sub string inside a string--
Enter main string:
hello world example
Enter the sub string to search:
world
Substring found at index: 6

⚠️ Notes

This program performs case-sensitive comparison.

fgets() reads newline characters; strcspn() is used to remove them.

If the substring is empty, the program prints:
"Empty sub String"