#include<stdio.h>

void main() {
	
	int word_len = 0 , i = 0;
	char temp;
	char word[100]; 

	printf("���ܾ� �Է� :");
	scanf("%s", word);

	printf("\n�Է��� ���ܾ� : %s ", word);

	while (word[i] != NULL) // NULL : '\0'
		word_len++, i++;


	printf("\n���ܾ��� ���� : %d", word_len);

	for (i = 0; i < (word_len/2); i++) {
		temp = word[i];
		word[i] = word[(word_len - i) - 1];
		word[(word_len - i) - 1] = temp;
	}

	printf("\n\n������ ���ܾ� : %s ", word);
	return 0;

	
}