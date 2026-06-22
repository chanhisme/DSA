#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 10, b = 5;
	printf("Before: a = %d, b = %d\n", a,b);
	swap(&a, &b);
	printf("After: a = %d, b = %d", a,b);
	
	
	
	
	
	getchar();
	return 0;
}