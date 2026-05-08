#include <stdio.h>
#include <stdlib.h>

int main(){
	double * p1, *p2;
	p1 = (double*) malloc (sizeof(double));
	p2 = (double*) calloc (1,sizeof(double));
	printf("p1, address: %u, value: %u\n", &p1, *p1);
	printf("p2, address: %u, value: %u\n", &p2, *p2);
	printf("Nhap 2 so: ");
	scanf("%lf %lf", p1, p2);
	printf("SUM = %.3lf\n", *p1 + (*p2));
	printf("DIFF = %.3lf\n", *p1 - (*p2));
	printf("PRODUCT = %.3lf\n", *p1 * (*p2));
	printf("QUOTIENT = %.3lf\n", *p1 / (*p2));
	
	
	
	
	
	getchar();
	return 0;
}