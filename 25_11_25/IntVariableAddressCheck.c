#include <stdio.h>

int main() {
 int a[10];

 printf("%zu\n",&a[0]);
 printf("%zu\n",&a[9]);

 //printf("%zu",(&a[0]-&a[9]));

  int b,c;/// check how address is assigned

  printf("b adddress: %zu\n",&b);
  printf("c adddress: %zu\n",&c);

  int d;/// check how address is assigned
  int e;
  printf("d adddress: %zu\n",&d);
  printf("e adddress: %zu\n",&e);
  return 0;
}
