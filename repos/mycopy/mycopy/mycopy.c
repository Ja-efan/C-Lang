#include <stdio.h>

int main(void)
{
	FILE * src = fopen("source.txt", "rt"); // �Է½�Ʈ��(src) ���� 
	FILE * des = fopen("dest.txt", "wt"); // ��½�Ʈ��(des) ����
	int ch;
	int i = 0;

	if (src==NULL || des==NULL)
	{
		puts("���� ���� ���� !");
		return -1; // ���������� ����
	}

	while ((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
		i += 1; // ���� ���� 
	}

	if (feof(src) != 0)
	{
		printf("���� ���簡 �Ϸ�Ǿ����ϴ�. \n");
		printf("����� ���� �̸��� dest.txt�Դϴ�. \n");
		printf("�� ���ڼ��� %d�� �Դϴ�. \n", i);
		
	}
	else
		puts("���� ���� ����!");

	fclose(src);
	fclose(des);

	return 0;

}