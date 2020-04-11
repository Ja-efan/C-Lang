#include<stdio.h>

void main() {
	
	int word_len = 0 , i = 0;
	char temp;
	char word[100]; 

	printf("영단어 입력 :");
	scanf("%s", word);

	printf("\n입력한 영단어 : %s ", word);

	while (word[i] != NULL) // NULL : '\0'
		word_len++, i++;


	printf("\n영단어의 길이 : %d", word_len);

	for (i = 0; i < (word_len/2); i++) {
		temp = word[i];
		word[i] = word[(word_len - i) - 1];
		word[(word_len - i) - 1] = temp;
	}

	printf("\n\n뒤집힌 영단어 : %s ", word);
	return 0;

	
}