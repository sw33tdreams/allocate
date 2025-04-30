#include <stdio.h>

int main() {
  printf("enter number of numbers\n");
  int size = 0;
  scanf("%d", &size);
  float* p = (float*)calloc(size, sizeof(float));
  printf("enter %d floats\n", size);
  for(int i = 0; i < size; i++){
    scanf("%f", &p[i]);
  }
  printf("your array is \n");
  for(int i = 0; i < size; i++){
    printf("%f, ", p[i]);
  }
printf("\n");
free(p);
return 0;
}
