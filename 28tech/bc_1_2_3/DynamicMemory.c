#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	int * a = (int*)malloc(n * sizeof(int));
	if(a == NULL) printf("khong cap phat dc\n");
	
	
	printf("Nhap cac phan tu: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	free(a);
	
	getchar();
	return 0;
}