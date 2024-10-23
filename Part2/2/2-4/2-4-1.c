#include <stdio.h>
#include <string.h>

int main() {
  char str[ ] = "";
  scanf("%s", str);
  int length = strlen(str);

  for (int i = 0; i < length; i++) {
    for (int j = 0; j <= i + 1; j++) {
      printf("%c", str[i]);
    }
  }

  return 0;
}