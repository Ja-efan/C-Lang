#include<stdio.h>	

int main(void) {

	FILE * src = fopen("src.txt", "rt");
	FILE * dst = fopen("dst.txt", "wt");
	char str[20];

	if (src == NULL || dst == NULL) {
		puts("���� ���� ����! ");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, dst);

	if (feof(src) != 0)
		puts("���� ���� �Ϸ�!");
	else
		puts("���� ���� ����!");

	fclose(src);
	fclose(dst);

	return 0;
}