#include<stdio.h>

void ClearLIneFromReadBuffer(void) {
	while (getchar() != '\n');
}

int main(void) {

	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력 : ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLIneFromReadBuffer(); // 입력버퍼 지우기

	fputs("이름입력 : ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("생년월일 : %s \n", perID);
	printf("이름 : %s \n", name);

	return 0;

}