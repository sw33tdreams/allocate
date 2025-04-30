#include <stdio.h>

int main() {
  printf("enter size of your string\n");
  int size = 0;
  scanf("%d", &size);
  getchar();
  printf("now enter your string\n");
  char* p = (char*) calloc(size, sizeof(char));
  fgets(p, size, stdin);
  puts("your string is:");
  puts(p);
  free(p);
  return 0;
}
