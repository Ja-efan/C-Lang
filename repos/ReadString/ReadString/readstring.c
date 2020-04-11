#include<stdio.h>

int main(void) {

	char str[7];
	char str2[6];
	int i;
	/*
	for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d :  %s \n", i + 1, str);

	}
	*/

	for (i = 0; i < 3; i++) {
		fgets(str2, sizeof(str2), stdin);
		printf("Read %d : %s \n", i + 1, str2);
	}


	return 0;
}