# include<stdio.h>

int main(int argc, char * argv[])
{
	FILE * src = fopen("source.txt", "rt"); // ��½�Ʈ��
	FILE * des = fopen("dest.txt", "wt"); // �Է½�Ʈ��

	int i = 0; // ���ڼ� �� ����
	int w = 0; // �ܾ�� �� ������������
	char arr[1]; // ���� ������ �迭


	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");
		return -1; // ���������� ����
	}

	while ((arr[0] = fgetc(src)) != EOF)
	{
		fputc(arr[0], des); // ���� ����
		i += 1; // ���� �� ��
		if (arr[0] == ' ')
			w += 1; // �ܾ� �� ��
	}
		
	if (feof(src) != 0)
	{
		printf("���� ���簡 �Ϸ� �Ǿ����ϴ�. \n");
		printf("����� ���� �̸��� dest.txt �Դϴ�. \n");
		printf("�� ���ڼ��� %d�� �Դϴ�. \n", i);
		printf("�� �ܾ���� %d�� �Դϴ�. \n", w);
	}
	else
		puts("���� ���� ����");

	fclose(src);
	fclose(des);

	return 0;
}