#include <stdio.h>

void main() {
	int A[5] = { 1,2,3,4,5 };
	int B[5] = { 1,2,3 };
	char C[5] = { 'a','b','c','d','e' };
	char D[5] = { 'a','b','c' };

	for (int i = 0; i < 5; i++) {
		printf("배열 A[&d]: %d", i, A[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("배열 B[&d]: %d", i, B[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("배열 C[&d]: %c", i, C[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("배열 D[&d]: %c", i, D[i]);
	}

	getchar();

}