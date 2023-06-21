# Linear Probing Project

This project presents a simple yet efficient program that reads several inputs, including two positive integers D and i, and a series of non-negative integers. The integers are added to a hash table of size D using closed hashing with linear probing. The content of the table is then outputted to the console.

## Description

The program, written in C++, implements a hash table with linear probing as a method of resolving collisions. The key features of this program are:

1. Creation of a hash table of size D with all slots initialized as empty (-1).
2. Insertion of non-negative integers into the hash table using linear probing.
3. The number of steps taken to find the next empty slot in the event of a collision is governed by the parameter i.
4. The hash function used is h(x) = x modulo D, where D is the size of the hash table.
5. Display of the hash table content with each slot printed on a new line. Empty slots are represented as -1.

## Instructions

To run the program, follow these steps:

1. Save the file `linearProbing.cpp` in your local system.
2. Open the terminal/command prompt and navigate to the directory containing the file.
3. Compile the C++ code using the command `g++ linearProbing.cpp -o output`, where `output` can be replaced with a name of your choice for the executable.
4. Run the program using the command `./output`.
5. Input two positive integers D (the size of the hash table) and i (the number of steps for linear probing) in the console.
6. Input a series of non-negative integers separated by spaces or newlines. Press `Enter` twice to mark the end of the inputs.
7. The program will then display the content of the hash table. Each line of output represents a slot in the hash table, with empty slots printed as -1.

This program is a simple demonstration of the use of linear probing in hash tables and can be used as a base to build more complex applications.
