#include <stdio.h>

int main() {
  int n = 0;
  scanf("%d", &n);

   int sum = n % 10 + (n / 10) % 10 + n / 100;

   printf("%d\n", sum);

}
