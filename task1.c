#include <stdio.h>
#include <stdlib.h>

int main() {
  int size = 0;
  printf("enter size of array\n");
  scanf("%d",&size);
  int* p = (int*)calloc(size, sizeof(int));
  if(p == 0) exit(-1);
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
