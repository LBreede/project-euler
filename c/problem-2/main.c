#include <stdio.h>

int main() {
  int a = 1;
  int b = 2;
  int sum = b;

  while (1) {
    int temp_a = a;
    a = b;
    b = temp_a + b;
    if (b >= 4000000)
      break;
    if (b % 2 == 0)
      sum += b;
  }
  printf("The sum is: %d\n", sum);

  return 0;
}
