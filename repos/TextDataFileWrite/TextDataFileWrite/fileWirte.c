#include<stdio.h>

int main(void) {

	FILE * fp = fopen("simple.text", "wt");

	if (fp == NULL) {
		puts("���� ���� ����! \n");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fputs("My name is Yeon \n", fp);
	fputs("Your name is Yoon \n", fp);
	
	fclose(fp);

	return 0;

}