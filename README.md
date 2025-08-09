# Pointers in C++

Name: Pal Jain  
Class: ENTC A3  
PRN: 24070123067  
Title: Programs on Pointers in C++

# Definition of Pointer
A pointer in C++ is a special type of variable that stores the address of another variable in memory rather than holding the actual data.  
They make it possible to:  
- Access and modify memory locations directly  
- Allocate and manage memory at runtime  
- Work with arrays and strings efficiently  
- Build data structures such as linked lists, stacks, and trees  

# Theory
Each pointer has a type that matches the type of variable it can refer to.  
The `&` operator retrieves the address of a variable, while the `*` operator accesses or modifies the value at the stored address.

# Programs on Pointers

## 1. Pointer Increment Demonstration

Algorithm:  
1. Declare variables of various types (int, bool, double, float)  
2. Create pointers corresponding to each type  
3. Assign each pointer the address of its respective variable  
4. Output the pointer’s initial address  
5. Increment the pointer and display the new address  
6. Repeat for all data types  

Explanation:
Increasing a pointer moves it to the next memory block for its type, so the step size depends on the size of the data type it points to, not just one byte.

## 2. Arithmetic on Array Elements via Pointers
Algorithm: 
1. Define an integer array  
2. Point two separate pointers to specific positions in the array  
3. Dereference them to read the values  
4. Perform addition and subtraction on those values  
5. Output the results  

Explanation: 
By pointing directly to array elements, operations like addition and subtraction can be done without using array indexing.

## 3. Displaying String Characters with a Pointer
Algorithm: 
1. Read a string from user input  
2. Assign a pointer to the first character  
3. Use a loop to print each character by dereferencing the pointer  
4. Move the pointer to the next character until the null terminator `'\0'` is reached  

Explanation:  
A char pointer can be moved through a string sequentially, printing each character until the end marker is found.

## 4. Reverse Traversal of an Array Using Pointers
Algorithm: 
1. Create an integer array with predefined values  
2. Calculate its length using `sizeof`  
3. Display elements in normal order using indexing  
4. Assign a pointer to the last element  
5. Loop backwards, printing each value by decrementing the pointer
   
Explanation: 
Starting from the last element and stepping backward lets us print the array in reverse without using indexing.

# Conclusion
Pointers are a core feature of C++ that allow programmers to work directly with memory addresses, leading to more control and flexibility.  
From these programs we learned how to:  
- Access and modify values through pointers  
- Apply pointer arithmetic according to data type size  
- Navigate arrays and strings without indexing  
- Traverse data both forwards and backwards using pointer movement
