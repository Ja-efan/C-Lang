#include<stdio.h>
#include<string.h>	

int main(void) {
	
	char str1[20] = "First~"; // 6+1
	char str2[20] = "Second"; // 6+1

	char str3[20] = "Simple num:"; //11+1
	char str4[20] = "1234567890"; // 10+1


	// strlen �Լ��� ���ڿ� ���̿� NULL���ڸ� ���Խ�Ű�� �ʴ´�.
	printf("str1�� ����: %d \n", (strlen(str1)));
	printf("str2�� ����: %d \n", (strlen(str2))); 
	printf("str3�� ����: %d \n", (strlen(str3))); 
	printf("str4�� ����: %d \n", (strlen(str4)));
	puts("-------------------------------------");
	//********case1*****************
	strcat(str1, str2);
	puts(str1);
	printf("str1�� ����: %d \n",(strlen(str1))); // 6+6

	//********case2*****************
	strncat(str3, str4, 7);
	puts(str3);
	printf("str3�� ����: %d", (strlen(str3))); // 11+7 

	return 0;
}