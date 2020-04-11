#include <stdio.h>

int main(void)
{
	FILE * src = fopen("source.txt", "rt"); // 입력스트림(src) 생성 
	FILE * des = fopen("dest.txt", "wt"); // 출력스트림(des) 생성
	int ch;
	int i = 0;

	if (src==NULL || des==NULL)
	{
		puts("파일 오픈 실패 !");
		return -1; // 비정상적인 종료
	}

	while ((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
		i += 1; // 문자 개수 
	}

	if (feof(src) != 0)
	{
		printf("파일 복사가 완료되었습니다. \n");
		printf("복사된 파일 이름은 dest.txt입니다. \n");
		printf("총 글자수는 %d개 입니다. \n", i);
		
	}
	else
		puts("파일 복사 실패!");

	fclose(src);
	fclose(des);

	return 0;

}