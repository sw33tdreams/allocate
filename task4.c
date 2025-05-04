#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int size = 0;
  printf("enter size of array\n");
  scanf("%d", &size);
  printf("now enter %d integers\n", size);
  int* p = (int*)calloc(size, sizeof(int));
  for(int i = 0; i < size; i++){
    scanf("%d", &p[i]);
  }
  int size1 = 0;
  printf("how many elements do you wanna add?\n");
  scanf("%d", &size1);
  size1 = size1 + size;
  p = (int*)realloc(p, size1);
  printf("enter %d integers\n", size1 - size);
  for(int i = size; i < size1; i++){
    scanf("%d", &p[i]);
  }
  puts("your array:");
  for(int i = 0; i < size1; i++){
    printf("%d ", p[i]);
  }
  free(p);
  return 0;
}
