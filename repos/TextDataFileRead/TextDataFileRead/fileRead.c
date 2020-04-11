#include<stdio.h>	

int main(void) {

	char str[30];
	int ch;
	FILE * fp = fopen("C:\\Users\\jaehwan\\source\\repos\\TextDataFileWrite\\TextDataFileWrite\\simple.text", "rt");

	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);

	return 0;

}