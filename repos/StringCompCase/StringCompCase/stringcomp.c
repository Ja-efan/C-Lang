#include<stdio.h>
#include<string.h>

int main(void) {

	char str1[20];
	char str2[20];

	printf("���ڿ� �Է� 1: ");
	//scanf("%s", str1);
	fgets(str1, sizeof(str1), stdin);

	printf("���ڿ� �Է� 2: ");
	//scanf("%s", str2);
	fgets(str2, sizeof(str2), stdin);

	if (!strcmp(str1, str2)) { //  strcmp�� �� ���ڿ��� ������ ��� 0�� ��ȯ�ϴµ� C���� 0�� false�� �ǹ��ϹǷ� !(NOT)�����ڸ� �ٿ��� �������� ���
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else {
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if (!strncmp(str1, str2, 3)) {
			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
		}
	}

	return 0;

}