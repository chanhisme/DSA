#include <stdio.h>

int main() {
	int x = 10;
	int * px = &x;
	for(int i = 0; i < 2 ; i ++) {
		printf("%u\n", px + i);
	}
	int b=  50;
	int * pb = &b;
	pb += 1;
	*pb = 1000;
	printf("%u ", pb + 3);

	getchar();
	return 0;
}