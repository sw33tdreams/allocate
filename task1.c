#include <stdio.h>

int main() {
  int size = 0;
  printf("enter size of array\n");
  scanf("%d",&size);
  int* p = (char*)calloc(size, sizeof(int));
  printf(" now enter %d integers\n", size);
  for(int i = 0; i < size; ++i){
    scanf("%d", &p[i]);
  }
printf("your array is: ");
  for(int i = 0; i < size; ++i){
  printf("%d ", p[i]);
}
printf("\n");
free(p);
return 0;
}
