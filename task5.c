#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void* costom_calloc(size_t num, size_t size){
	void* p = malloc(num * size);
	if(p){
	memset(p, 0, num * size);
	}
	return p;
}
