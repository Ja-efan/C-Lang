#include<stdio.h>
#include<string.h>

int main(void) {

	char str1[20];
	char str2[20];

	printf("문자열 입력 1: ");
	//scanf("%s", str1);
	fgets(str1, sizeof(str1), stdin);

	printf("문자열 입력 2: ");
	//scanf("%s", str2);
	fgets(str2, sizeof(str2), stdin);

	if (!strcmp(str1, str2)) { //  strcmp는 두 문자열이 동일할 경우 0을 반환하는데 C언어에서 0은 false를 의미하므로 !(NOT)연산자를 붙여서 조건으로 사용
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else {
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3)) {
			puts("그러나 앞 세 글자는 동일합니다.");
		}
	}

	return 0;

}