int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20;
  printf("%d\n", x); // This will print 20 

  int y = 30; 
  ptr = &y; // ptr now points to y
  *ptr = 40; 
  printf("%d\n", x); //This will print 20
   printf("%d\n", y); //This will print 40

  return 0; 
}