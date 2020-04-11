#include<stdio.h>
#include<string.h>	

int main(void) {
	
	char str1[20] = "First~"; // 6+1
	char str2[20] = "Second"; // 6+1

	char str3[20] = "Simple num:"; //11+1
	char str4[20] = "1234567890"; // 10+1


	// strlen 함수는 문자열 길이에 NULL문자를 포함시키지 않는다.
	printf("str1의 길이: %d \n", (strlen(str1)));
	printf("str2의 길이: %d \n", (strlen(str2))); 
	printf("str3의 길이: %d \n", (strlen(str3))); 
	printf("str4의 길이: %d \n", (strlen(str4)));
	puts("-------------------------------------");
	//********case1*****************
	strcat(str1, str2);
	puts(str1);
	printf("str1의 길이: %d \n",(strlen(str1))); // 6+6

	//********case2*****************
	strncat(str3, str4, 7);
	puts(str3);
	printf("str3의 길이: %d", (strlen(str3))); // 11+7 

	return 0;
}