#include<stdio.h>	

int main(void) {

	FILE * src = fopen("MagazineB MM.jpg", "rb");
	FILE * dst = fopen("MagazineB MM2.jpg", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || dst == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}

	while (1) {

		readCnt = fread((void *)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void *)buf, 1, readCnt, dst);
				puts("파일 복사 완료!");
				break;
			}
			else
				puts("파일 복사 실패!");
			break;
		}

		fwrite((void *)buf, 1, sizeof(buf), dst);
	}

	fclose(src);
	fclose(dst);

	return 0;
}