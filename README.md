# C Dangling Pointer and Memory Leak Example

This repository demonstrates a common error in C programming: dangling pointers and potential memory leaks.  The code shows how incorrect pointer manipulation can lead to unexpected program behavior and security vulnerabilities. The solution provides safer memory management techniques. 

## Running the Code

1. Clone the repository.
2. Compile the `bug.c` file using a C compiler (like GCC):  `gcc bug.c -o bug`
3. Run the executable: `./bug`
4. Observe the output, noting how the pointer's behavior changes.
5. Repeat for `bugSolution.c` for a comparison. 

## Understanding the Bug

The original code uses pointers to integers without proper error handling. This allows the program to potentially access memory addresses it should not.