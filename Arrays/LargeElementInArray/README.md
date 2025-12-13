# 🔎 Finding the Largest Element in an Array (C Program)

## 📖 Overview
This program allows the user to input an array of integers and then finds the **largest element** in that array.  
It demonstrates **basic array handling**, **user input**, and **comparison logic** in C.

---

## 🧩 Code Explanation
### Key Steps:
1. **Input Array Size**  
   ```c
   scanf("%d", &sizeOfArray);

The user specifies how many elements the array should contain.
2. Array Creation & Input
int array[sizeOfArray];
for(int i=0; i<sizeOfArray; i++){
    scanf("%d", &array[i]);
}
2. A variable-length array is created, and the user enters the elements.
3. Finding the Largest Element
int maxValueInArray = array[0];
for(int i=1; i<sizeOfArray; i++){
    if(array[i] > maxValueInArray){
        maxValueInArray = array[i];
    }
}

- Start by assuming the first element is the largest.
- Compare each subsequent element.
- Update maxValueInArray whenever a larger value is found.
4. Output Result
printf("Largest element in array: %d", maxValueInArray);

▶️ Sample RunInput:Finding largest element in the array
Enter the size of Array:
5
Enter 5 elements:
12 45 7 23 89
Output:Largest element in array: 89

⚙️ How to Compile and Run- Save the code in a file, e.g., largest_element.c.
- Open a terminal and compile:
gcc largest_element.c -o largest_element
- Run the program:
./largest_element

🎯 Learning Outcomes
- Understand how to use variable-length arrays in C.
- Learn how to iterate through arrays using loops.
- Practice comparison logic to find maximum values.


