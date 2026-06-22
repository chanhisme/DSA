#include <stdio.h>
#include <stdlib.h>


int main (){
	int n = 5;
	int * a= (int*)malloc(n * sizeof(int));
	if(a == NULL){
		printf("FAIL\n");
	}	
	else{
		printf("%u\n", *a);
		printf("%u byte", n*sizeof(int));
	}
	//calloc thi xai i chang nhung gan cac phan tu == 0
	//realloc la cap lai 
	//free giai phong, xoa bo nho
	
	
	
	
	getchar();
	return 0;
}