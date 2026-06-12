#include <stdio.h>

int main() {
  long int n = 600851475143;
  int result = 0;
  for (int i = 2; i <= n; ++i) {
    while (n % i == 0 && n > 0) {
      result = i;
      n = n / i;
    }
  }
  printf("The result: %d\n", result);
  return 0;
}
