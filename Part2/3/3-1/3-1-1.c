#include <stdio.h>

int main() {
  int a, b, input, temp;
  int count = 0;

  scanf("%d", &input);

  if (input < 10) {
    input = input * 10;
  }

  temp = input;

  while (1) {
    a = temp / 10;
    b = temp % 10;
    temp = b * 10 + (a + b) % 10;

    if (temp == input) {
      break;
    }

    count++;
  }

  printf("%d\n", count);

  return 0;
}
