# include<stdio.h>

int main(int argc, char * argv[])
{
	FILE * src = fopen("source.txt", "rt"); // 출력스트림
	FILE * des = fopen("dest.txt", "wt"); // 입력스트림

	int i = 0; // 글자수 셀 변수
	int w = 0; // 단어수 셀 변수ㄱㄱㄱㄹ
	char arr[1]; // 글자 복사할 배열


	if (src == NULL || des == NULL)
	{
		puts("파일 오픈 실패");
		return -1; // 비정상적인 종료
	}

	while ((arr[0] = fgetc(src)) != EOF)
	{
		fputc(arr[0], des); // 글자 복사
		i += 1; // 글자 수 셈
		if (arr[0] == ' ')
			w += 1; // 단어 수 셈
	}
		
	if (feof(src) != 0)
	{
		printf("파일 복사가 완료 되었습니다. \n");
		printf("복사된 파일 이름은 dest.txt 입니다. \n");
		printf("총 글자수는 %d개 입니다. \n", i);
		printf("총 단어수는 %d개 입니다. \n", w);
	}
	else
		puts("파일 복사 실패");

	fclose(src);
	fclose(des);

	return 0;
}