#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d\n", x); // Prints 20 

  int y = 30; 
  ptr = &y; // ptr now points to y
  *ptr = 40; 
  printf("%d\n", x); // Prints 20
   printf("%d\n", y); // Prints 40

  // Improved memory management (although not strictly necessary in this simple example, good practice to always free memory when not used any more) 
  // For this specific example, no dynamic memory allocation, therefore no explicit deallocation is required. 

  return 0;
} 