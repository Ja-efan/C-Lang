#include<stdio.h>

int main(void) {

	FILE * src = fopen("src.txt", "rt");
	FILE * dst = fopen("dst.txt", "wt");

	int ch;

	if (src == NULL || dst == NULL) {
		puts("파일 오픈 실패! ");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) 
		fputc(ch, dst);

	if (feof(src) != EOF)
		puts("파일 복사 완료! ");
	else
		puts("파일 복사 실패! ");

	fclose(src);
	fclose(dst);

	return 0;
}