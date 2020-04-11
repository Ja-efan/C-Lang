#include<stdio.h>

int main(void) {

	FILE * src = fopen("src.txt", "rt");
	FILE * dst = fopen("dst.txt", "wt");

	int ch;

	if (src == NULL || dst == NULL) {
		puts("���� ���� ����! ");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) 
		fputc(ch, dst);

	if (feof(src) != EOF)
		puts("���� ���� �Ϸ�! ");
	else
		puts("���� ���� ����! ");

	fclose(src);
	fclose(dst);

	return 0;
}